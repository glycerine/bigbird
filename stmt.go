package main

import (
	"errors"
	"fmt"
	"go/ast"
	"go/parser"
	"go/token"
)

func ParseStmt(line string) ([]string, error) {
	//fmt.Printf("bird.ParseStmt() called.\n")

	r := make([]string, 0)

	fset := token.NewFileSet()
	wrap := "package main; func main() { " + line + " }"
	f, err := parser.ParseFile(fset, "", wrap, parser.ParseComments|parser.DeclarationErrors)
	if err != nil {
		panic(err)
	}

	//	fmt.Printf("\n bird: ParseFile output *ast.File, f is :\n")
	//	goon.Dump(f)

	//	fmt.Printf("\n bird: f.Decls[0] is: \n")
	//	goon.Dump(f.Decls[0])

	mainParse := f.Decls[0].(*ast.FuncDecl)
	body := mainParse.Body
	//	fmt.Printf("\n bird: f.Decls[0].Body is: %#v\n", body)

	firstStmt := body.List[0]
	//fmt.Printf("\n bird: firstStmt is:\n")
	//goon.Dump(firstStmt)

	switch firstStmt.(type) {
	case *ast.ExprStmt:
		x := firstStmt.(*ast.ExprStmt)
		tx, err := TranslateExpr(&(x.X))
		if err != nil {
			return r, err
		}
		r = append(r, tx)
		return r, nil

	case *ast.AssignStmt:
		//fmt.Printf("bird: *ast.AssignStmt found.\n")
		e := firstStmt.(*ast.AssignStmt)
		lhs := e.Lhs
		rhs := e.Rhs
		if len(lhs) < 1 {
			return r, errors.New("no left hand side of assignment")
		}
		if len(rhs) < 1 {
			return r, errors.New("no right hand side of assignment")
		}
		lhsScm, err := TranslateExprSlice(lhs)
		if err != nil {
			return r, err
		}

		rhsScm, err := TranslateExprSlice(rhs)
		if err != nil {
			return r, err
		}
		if len(lhsScm) != len(rhsScm) {
			return r, errors.New(fmt.Sprintf("syntax err in '%s': left hand side had %d elements, "+
				"but right-hand side had %d", line, len(lhsScm), len(rhsScm)))
		}
		for i := range lhsScm {
			r = append(r, "(define "+lhsScm[i]+" "+rhsScm[i]+")")
		}

		return r, nil
	}

	return r, nil
}
