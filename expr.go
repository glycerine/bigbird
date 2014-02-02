package main

import "go/ast"

func TranslateExprSlice(e []ast.Expr) ([]string, error) {
	r := make([]string, len(e))
	var err error
	for i, v := range e {
		r[i], err = TranslateExpr(&v)
		if err != nil {
			return r, err
		}
	}
	return r, nil
}

func TranslateExpr(e *ast.Expr) (string, error) {
	//fmt.Printf("TranslateExpr called with e:\n")
	//goon.Dump(e)

	switch (*e).(type) {
	case *ast.Ident:
		id := (*e).(*ast.Ident)
		return id.Name, nil

	case *ast.BasicLit:
		lit := (*e).(*ast.BasicLit)
		return lit.Value, nil
	}

	return "", nil
}
