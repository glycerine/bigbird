package main

import (
	"fmt"
	"go/ast"
	"go/token"
	"strconv"
	"strings"
)

func TranslateExprSlice(e []ast.Expr) ([]string, error) {
	r := make([]string, len(e))
	var err error
	for i, v := range e {
		r[i], err = TranslateExpr(v)
		if err != nil {
			return r, err
		}
	}
	return r, nil
}

func TranslateExpr(expr ast.Expr) (string, error) {
	//fmt.Printf("TranslateExpr called with e:\n")
	//goon.Dump(e)

	switch e := expr.(type) {
	case *ast.Ident:
		id := expr.(*ast.Ident)
		return id.Name, nil

	case *ast.BasicLit:
		lit := expr.(*ast.BasicLit)

		switch lit.Kind {
		case token.STRING:
			//fmt.Printf(" we have a token.STRING.\n")
			le := len(lit.Value)
			if lit.Value[0] == '`' && lit.Value[le-1] == '`' {
				//fmt.Printf(" we have a string enclosed in backticks.\n")

				return strconv.Quote(lit.Value[1:(le - 1)]), nil
			}
		}
		return lit.Value, nil

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
		argSlice, err := TranslateExprSlice(args)
		if err != nil {
			return "", err
		}
		argStr := strings.Join(argSlice, " ")
		call := "(" + pkg + "." + name + " " + argStr + ")"
		return call, nil

		// derived from gopherjs/expressions.go code
	case *ast.BinaryExpr:
		if e.Op == token.NEQ {
			s, err := TranslateExpr(&ast.BinaryExpr{
				X:  e.X,
				Op: token.EQL,
				Y:  e.Y,
			})
			if err != nil {
				panic(err)
				return "", err
			}
			return fmt.Sprintf("(not %s)", s), nil
		}

		/*
			t := c.info.Types[e.X].Type
			t2 := c.info.Types[e.Y].Type
			_, isInterface := t2.Underlying().(*types.Interface)
			if isInterface {
				t = t2
			}

			if basic, isBasic := t.Underlying().(*types.Basic); isBasic && basic.Info()&types.IsNumeric != 0 {
				if is64Bit(basic) {
					switch e.Op {
					case token.MUL:
						return fmt.Sprintf("go$mul64(%s, %s)", c.translateExpr(e.X), c.translateExpr(e.Y))
					case token.QUO:
						return fmt.Sprintf("go$div64(%s, %s, false)", c.translateExpr(e.X), c.translateExpr(e.Y))
					case token.REM:
						return fmt.Sprintf("go$div64(%s, %s, true)", c.translateExpr(e.X), c.translateExpr(e.Y))
					case token.SHL:
						return fmt.Sprintf("go$shiftLeft64(%s, %s)", c.translateExpr(e.X), c.flatten64(e.Y))
					case token.SHR:
						return fmt.Sprintf("go$shiftRight%s(%s, %s)", toJavaScriptType(basic), c.translateExpr(e.X), c.flatten64(e.Y))
					case token.EQL:
						return c.formatExpr("(%1h === %2h && %1l === %2l)", e.X, e.Y)
					case token.LSS:
						return c.formatExpr("(%1h < %2h || (%1h === %2h && %1l < %2l))", e.X, e.Y)
					case token.LEQ:
						return c.formatExpr("(%1h < %2h || (%1h === %2h && %1l <= %2l))", e.X, e.Y)
					case token.GTR:
						return c.formatExpr("(%1h > %2h || (%1h === %2h && %1l > %2l))", e.X, e.Y)
					case token.GEQ:
						return c.formatExpr("(%1h > %2h || (%1h === %2h && %1l >= %2l))", e.X, e.Y)
					case token.ADD, token.SUB:
						return c.formatExpr("new %3s(%1h %4s %2h, %1l %4s %2l)", e.X, e.Y, c.typeName(t), e.Op.String())
					case token.AND, token.OR, token.XOR:
						return c.formatExpr("new %3s(%1h %4s %2h, (%1l %4s %2l) >>> 0)", e.X, e.Y, c.typeName(t), e.Op.String())
					case token.AND_NOT:
						return c.formatExpr("new %3s(%1h &~ %2h, (%1l &~ %2l) >>> 0)", e.X, e.Y, c.typeName(t))
					default:
						panic(e.Op)
					}
				}
			}
		*/
	}

	return "", nil
}
