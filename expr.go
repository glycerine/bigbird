package main

import "go/ast"

func TranslateExpr(e ast.Expr) (string, error) {
	//fmt.Printf("TranslateExpr called with e:\n")
	//goon.Dump(e)

	switch e.(type) {
	case *ast.Ident:
		id := e.(*ast.Ident)
		return id.Name, nil

	case *ast.BasicLit:
		lit := e.(*ast.BasicLit)
		return lit.Value, nil
	}

	return "", nil
}
