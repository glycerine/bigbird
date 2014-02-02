package main

import (
	"bytes"
	"fmt"
	"go/ast"
	"go/token"
	"strconv"
	"strings"

	"code.google.com/p/go.tools/go/exact"
	"code.google.com/p/go.tools/go/types"
)

func (c *Accum) TranslateExprSlice(e []ast.Expr) []string {
	r := make([]string, len(e))
	for i, v := range e {
		r[i] = c.translateExpr(v)
	}
	return r
}

func (c *Accum) translateExpr(expr ast.Expr) string {
	//fmt.Printf("translateExpr called with e:\n")
	//goon.Dump(e)

	switch e := expr.(type) {
	case *ast.Ident:
		id := expr.(*ast.Ident)
		//fmt.Printf("id.Name is expr.go is: %#v\n", id.Name)
		if id.Name == "true" {
			return "#t"
		}
		if id.Name == "false" {
			return "#f"
		}
		return id.Name

	case *ast.BasicLit:
		lit := expr.(*ast.BasicLit)

		//fmt.Printf("lit in BasicLit is: %#v\n", lit)
		switch lit.Kind {
		case token.STRING:
			//fmt.Printf(" we have a token.STRING.\n")
			le := len(lit.Value)
			if lit.Value[0] == '`' && lit.Value[le-1] == '`' {
				//fmt.Printf(" we have a string enclosed in backticks.\n")

				return strconv.Quote(lit.Value[1:(le - 1)])
			}
		}
		return lit.Value

	case *ast.CallExpr:
		callExpr := expr.(*ast.CallExpr)
		fun := callExpr.Fun.(*ast.SelectorExpr)
		x := fun.X.(*ast.Ident)
		pkg := x.Name
		sel := fun.Sel
		name := sel.Name
		args := callExpr.Args
		//fmt.Printf("callExpr pkg:'%s' name:'%s'\n", pkg, name)
		//goon.Dump(callExpr)
		//fmt.Printf("args is\n")
		//goon.Dump(args)
		argSlice := c.TranslateExprSlice(args)
		if c.err != nil {
			return ""
		}
		argStr := strings.Join(argSlice, " ")
		call := "(" + pkg + "." + name + " " + argStr + ")"
		return call

		// derived from gopherjs/expressions.go code
	case *ast.BinaryExpr:
		if e.Op == token.NEQ {
			s := c.translateExpr(&ast.BinaryExpr{
				X:  e.X,
				Op: token.EQL,
				Y:  e.Y,
			})
			return fmt.Sprintf("(not %s)", s)
		}

		t := c.info.Types[e.X].Type
		t2 := c.info.Types[e.Y].Type

		//fmt.Printf("t is\n")
		//goon.Dump(t)
		//		fmt.Printf("t2 is\n")
		//		goon.Dump(t2)

		_, isInterface := t2.Underlying().(*types.Interface)
		if isInterface {
			t = t2
		}

		// Notes, operators from token.go
		/*
			ADD // +
			SUB // -
			MUL // *
			QUO // /
			REM // %

			AND     // &
			OR      // |
			XOR     // ^
			SHL     // <<
			SHR     // >>
			AND_NOT // &^

			ADD_ASSIGN // +=
			SUB_ASSIGN // -=
			MUL_ASSIGN // *=
			QUO_ASSIGN // /=
			REM_ASSIGN // %=

			AND_ASSIGN     // &=
			OR_ASSIGN      // |=
			XOR_ASSIGN     // ^=
			SHL_ASSIGN     // <<=
			SHR_ASSIGN     // >>=
			AND_NOT_ASSIGN // &^=

			LAND  // &&
			LOR   // ||
			ARROW // <-
			INC   // ++
			DEC   // --

			EQL    // ==
			LSS    // <
			GTR    // >
			ASSIGN // =
			NOT    // !

			NEQ      // !=
			LEQ      // <=
			GEQ      // >=
			DEFINE   // :=
		*/

		basic, isBasic := t.Underlying().(*types.Basic)
		bi := basic.Info()
		isNum := bi & types.IsNumeric
		if isBasic && isNum == 0 {
			//fmt.Printf("we have a non-numeric operation!\n")
			//fmt.Printf("e is %#v\n", e)

			switch e.Op {
			// is NOT a binop or unop to begin with???
			//			case token.NOT:
			// alt: lognot
			//				return fmt.Sprintf("(lognot %s %s)", c.translateExpr(e.X), c.translateExpr(e.Y))

			// see go/src/pkg/go/token/token.go for enum definition of token. types.
			case token.LAND:
				// alt: logand
				//return fmt.Sprintf("(and %s %s)", c.translateExpr(e.X), c.translateExpr(e.Y))
				return fmt.Sprintf("(logand %s %s)", c.translateExpr(e.X), c.translateExpr(e.Y))

			case token.LOR:
				// alt: logior
				return fmt.Sprintf("(logior %s %s)", c.translateExpr(e.X), c.translateExpr(e.Y))
				//			case token.XOR:
				//				return fmt.Sprintf("(logxor %s %s)", c.translateExpr(e.X), c.translateExpr(e.Y))

			default:
				panic(e.Op)
			}
		}
		if isBasic && isNum != 0 {
			if is64Bit(basic) {
				//fmt.Printf("e is %#v\n", e)
				switch e.Op {
				case token.SHL:
					// alternatively (arithmetic-shift a b) with positive b
					return fmt.Sprintf("(arithmetic-shift %s %s)", c.translateExpr(e.X), c.translateExpr(e.Y))
				case token.SHR:
					// alternatively (arithmetic-shitf a b) with negative b
					return fmt.Sprintf("(arithmetic-shift %s (- %s))", c.translateExpr(e.X), c.translateExpr(e.Y))
				case token.EQL:
					return fmt.Sprintf("(equal? %s %s)", c.translateExpr(e.X), c.translateExpr(e.Y))
				case token.MUL, token.LSS, token.LEQ, token.GTR, token.GEQ, token.ADD, token.SUB:
					return fmt.Sprintf("(%s %s %s)", e.Op.String(), c.translateExpr(e.X), c.translateExpr(e.Y))
				case token.QUO:
					/*
						 in Golang:
							//Q(x, y)   x = q*y + r
							// x   y      r   q
							Q(-5, -2) // -1,  2;  -5 == 2*-2 + -1, checks ok.
							Q(-5, 2)  // -1, -2;  -5 == -2*2 + -1, checks ok.
							Q(5, -2)  //  1, -2;   5 == -2*-2 + 1, checks ok.
							Q(5, 2)   //  1,  2;   5 == 2*2   + 1, checks ok.
					*/

					/*
					   in Chicken scheme:
					   #;27> (quotient -5 -2)
					   2
					   #;28> (quotient -5 2)
					   -2
					   #;29> (quotient 5 -2)
					   -2
					   #;30> (quotient 5 2)
					   2

					*/
					return fmt.Sprintf("(quotient %s %s)", c.translateExpr(e.X), c.translateExpr(e.Y))

				case token.REM:
					// NB Use remainder, not modulo. The modulo operator doesn't satify the % property.
					//        reference: http://golang.org/ref/spec, Arithmetic operators section.
					//
					// e.g.:      -5 % 2 == -1 in go. aside: -5 / 2 == 2
					// since     (remainder -5 2) == -1
					//    so remainder works;
					// but:      (modulo    -5 2) ==  1
					//    so modulo does not.
					//
					/*
					   // in chicken scheme:
					   #;31> (remainder -5 -2)
					   -1
					   #;32> (remainder -5 2)
					   -1
					   #;33> (remainder 5 -2)
					   1
					   #;34> (remainder 5 2)
					   1
					*/
					return fmt.Sprintf("(remainder %s %s)", c.translateExpr(e.X), c.translateExpr(e.Y))

				case token.NOT:
					// alt: lognot
					return fmt.Sprintf("(bitwise-not %s %s)", c.translateExpr(e.X), c.translateExpr(e.Y))

				case token.AND:
					// alt: logand
					//return fmt.Sprintf("(and %s %s)", c.translateExpr(e.X), c.translateExpr(e.Y))
					return fmt.Sprintf("(bitwise-and %s %s)", c.translateExpr(e.X), c.translateExpr(e.Y))

				case token.OR:
					// alt: logior
					return fmt.Sprintf("(bitwise-ior %s %s)", c.translateExpr(e.X), c.translateExpr(e.Y))
				case token.XOR:
					// alt: logxor
					return fmt.Sprintf("(bitwise-xor %s %s)", c.translateExpr(e.X), c.translateExpr(e.Y))

				case token.AND_NOT: // bitwise clear
					return c.formatExpr("new %3s(%1h &~ %2h, (%1l &~ %2l) >>> 0)", e.X, e.Y, c.typeName(t))
				default:
					panic(e.Op)
				}
			}
		}

	}

	return ""
}

func (c *Accum) flatten64(expr ast.Expr) string {
	if is64Bit(c.info.Types[expr].Type.Underlying().(*types.Basic)) {
		return fmt.Sprintf("go$flatten64(%s)", c.translateExpr(expr))
	}
	return c.translateExpr(expr)
}

func toJavaScriptType(t *types.Basic) string {
	switch t.Kind() {
	case types.UntypedInt:
		return "Int"
	case types.Byte:
		return "Uint8"
	case types.Rune:
		return "Int32"
	case types.UnsafePointer:
		return "UnsafePointer"
	default:
		name := t.String()
		return strings.ToUpper(name[:1]) + name[1:]
	}
}

func (c *Accum) formatExpr(format string, a ...interface{}) string {
	var vars = make([]string, len(a))
	var assignments []string
	varFor := func(i int) string {
		v := vars[i]
		if v != "" {
			return v
		}
		e := a[i].(ast.Expr)
		if ident, isIdent := e.(*ast.Ident); isIdent {
			v = c.translateExpr(ident)
			vars[i] = v
			return v
		}
		v = c.newVariable("x")
		assignments = append(assignments, v+" = "+c.translateExpr(e))
		vars[i] = v
		return v
	}
	out := bytes.NewBuffer(nil)
	for i := 0; i < len(format); i++ {
		b := format[i]
		if b == '%' {
			n := int(format[i+1] - '0' - 1)
			k := format[i+2]
			i += 2
			switch k {
			case 's':
				out.WriteString(a[n].(string))
			case 'e':
				out.WriteString(varFor(n))
			case 'h':
				if val := c.info.Types[a[n].(ast.Expr)].Value; val != nil {
					d, _ := exact.Uint64Val(val)
					if c.info.Types[a[n].(ast.Expr)].Type.Underlying().(*types.Basic).Kind() == types.Int64 {
						out.WriteString(strconv.FormatInt(int64(d)>>32, 10))
						continue
					}
					out.WriteString(strconv.FormatUint(d>>32, 10))
					continue
				}
				out.WriteString(varFor(n) + ".high")
			case 'l':
				if val := c.info.Types[a[n].(ast.Expr)].Value; val != nil {
					d, _ := exact.Uint64Val(val)
					out.WriteString(strconv.FormatUint(d&(1<<32-1), 10))
					continue
				}
				out.WriteString(varFor(n) + ".low")
			case 'r':
				if val := c.info.Types[a[n].(ast.Expr)].Value; val != nil {
					r, _ := exact.Float64Val(exact.Real(val))
					out.WriteString(strconv.FormatFloat(r, 'g', -1, 64))
					continue
				}
				out.WriteString(varFor(n) + ".real")
			case 'i':
				if val := c.info.Types[a[n].(ast.Expr)].Value; val != nil {
					i, _ := exact.Float64Val(exact.Imag(val))
					out.WriteString(strconv.FormatFloat(i, 'g', -1, 64))
					continue
				}
				out.WriteString(varFor(n) + ".imag")
			default:
				panic("formatExpr: " + format[i:i+3])
			}
			continue
		}
		out.WriteByte(b)
	}
	if len(assignments) == 0 {
		return out.String()
	}
	return "(" + strings.Join(assignments, ", ") + ", " + out.String() + ")"
}

func (c *Accum) typeName(ty types.Type) string {
	switch t := ty.(type) {
	case *types.Basic:
		switch t.Kind() {
		case types.UntypedNil:
			return "null"
		case types.UnsafePointer:
			return "Go$UnsafePointer"
		default:
			return "Go$" + toJavaScriptType(t)
		}
	case *types.Named:
		if t.Obj().Name() == "error" {
			return "go$error"
		}
		return c.objectName(t.Obj())
	case *types.Pointer:
		return fmt.Sprintf("(go$ptrType(%s))", c.initArgs(t))
	case *types.Interface:
		if t.Empty() {
			return "go$emptyInterface"
		}
		return fmt.Sprintf("(go$interfaceType(%s))", c.initArgs(t))
	case *types.Array, *types.Chan, *types.Slice, *types.Map, *types.Signature, *types.Struct:
		return fmt.Sprintf("(go$%sType(%s))", strings.ToLower(typeKind(t)), c.initArgs(t))
	default:
		panic(fmt.Sprintf("Unhandled type: %T\n", t))
	}
}

func (c *Accum) newVariable(name string) string {
	if name == "" {
		panic("newVariable: empty name")
	}
	for _, b := range []byte(name) {
		if b < '0' || b > 'z' {
			name = "nonAsciiName"
			break
		}
	}
	if strings.HasPrefix(name, "dollar_") {
		name = "$" + name[7:]
	}
	n := c.allVarNames[name]
	c.allVarNames[name] = n + 1
	if n > 0 {
		name = fmt.Sprintf("%s$%d", name, n)
	}
	c.funcVarNames = append(c.funcVarNames, name)
	return name
}

func (c *Accum) objectName(o types.Object) string {
	if o.Pkg() != nil && o.Pkg() != c.pkg {
		pkgVar, found := c.pkgVars[o.Pkg().Path()]
		if !found {
			pkgVar = fmt.Sprintf(`go$packages["%s"]`, o.Pkg().Path())
		}
		return pkgVar + "." + o.Name()
	}

	name, found := c.objectVars[o]
	if !found {
		name = c.newVariable(o.Name())
		c.objectVars[o] = name
	}

	switch o.(type) {
	case *types.Var, *types.Const:
		if o.Exported() && o.Parent() == c.pkg.Scope() {
			return "go$pkg." + name
		}
	}
	return name
}

func typeKind(ty types.Type) string {
	switch t := ty.Underlying().(type) {
	case *types.Basic:
		return toJavaScriptType(t)
	case *types.Array:
		return "Array"
	case *types.Chan:
		return "Chan"
	case *types.Interface:
		return "Interface"
	case *types.Map:
		return "Map"
	case *types.Signature:
		return "Func"
	case *types.Slice:
		return "Slice"
	case *types.Struct:
		return "Struct"
	case *types.Pointer:
		return "Ptr"
	default:
		panic(fmt.Sprintf("Unhandled type: %T\n", t))
	}
}
