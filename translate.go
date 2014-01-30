package main

import (
	"fmt"
	"go/ast"
	"go/parser"
	"reflect"

	goon "github.com/shurcooL/go-goon"
)

func TranslateToScheme(line string) (string, error) {
	// TODO: implement the translation from go to scheme

	expr, err := parser.ParseExpr(line)
	if err != nil {
		fmt.Printf("parse error: %v\n", err)
		return "", err
	}
	if expr == nil {
		fmt.Printf("expr returned was nil\n")
	} else {
		fmt.Printf("expr is :")
		goon.Dump(expr)

		ty := reflect.TypeOf(expr)
		fmt.Printf("ty is :")
		goon.Dump(ty)
	}

	switch expr.(type) {
	case *ast.CallExpr:
		callExpr := expr.(*ast.CallExpr)
		fun := callExpr.Fun.(*ast.SelectorExpr)
		x := fun.X.(*ast.Ident)
		pkg := x.Name
		sel := fun.Sel
		name := sel.Name
		args := callExpr.Args
		fmt.Printf("callExpr pkg:'%s' name:'%s'\n", pkg, name)
		goon.Dump(callExpr)
		fmt.Printf("args is\n")
		goon.Dump(args)
	default:
	}

	return line, nil // stubbed for now
}
