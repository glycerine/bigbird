package main

import (
	"go/ast"
	"go/token"
	"strconv"
)

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
	}

	return "", nil
}
