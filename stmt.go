package main

import (
	"errors"
	"fmt"
	"go/ast"
	"go/parser"
	"go/token"
)

func ParseStmt(line string, ac *Accum) ([]string, error) {
	//fmt.Printf("bird.ParseStmt() called.\n")

	r := make([]string, 0)

	fset := token.NewFileSet()

	ac.goLine = []string{line}
	wrap := ac.GenCode()
	//fmt.Printf("wrap from ac.GenCode() is:\n%#v\n", wrap)

	// parse
	f, err := parser.ParseFile(fset, "", wrap, parser.ParseComments|parser.DeclarationErrors)
	if err != nil {
		panic(err)
	}

	// type-check
	errList := ac.Check(fset, []*ast.File{f})

	if len(errList) > 0 {

	}

	//fmt.Printf("\n bird: ParseFile output *ast.File, f is :\n")
	//goon.Dump(f)

	//fmt.Printf("\n bird: len(f.Decls[0]) is: %d\n", len(f.Decls))
	mainLoc := -1
	for i := range f.Decls {
		//fmt.Printf("\n bird expose: decl[%d] = \n", i)
		//goon.Dump(f.Decls[i])
		fun, ok := f.Decls[i].(*ast.FuncDecl)
		if ok {
			if fun.Name.Name == "main" {
				mainLoc = i
				//fmt.Printf("we found main at index %d of f.Decls\n", i)
			} else {
				//fmt.Printf("index %d of f.Decls was a FuncDecl but not called main().\n", i)
			}
		} else {
			//fmt.Printf("index %d of f.Decls was not a FuncDecl.\n", i)
		}
	}
	//fmt.Printf("\n bird: f.Decls[0] is: \n")
	//goon.Dump(f.Decls[0])

	//genDecl := f.Decls[0].(*ast.GenDecl)
	//fmt.Printf("\n bird: genDecl is: \n")
	//goon.Dump(genDecl)

	mainParse := f.Decls[mainLoc].(*ast.FuncDecl)
	body := mainParse.Body
	//	fmt.Printf("\n bird: f.Decls[0].Body is: %#v\n", body)

	firstStmt := body.List[0]
	//fmt.Printf("\n bird: firstStmt is:\n")
	//goon.Dump(firstStmt)

	switch firstStmt.(type) {
	case *ast.ExprStmt:
		x := firstStmt.(*ast.ExprStmt)
		tx, err := TranslateExpr(x.X)
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
