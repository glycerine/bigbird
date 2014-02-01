package main

import (
	"fmt"
	"go/ast"
	"go/parser"
	"go/token"
	"strconv"

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

		//ty := reflect.TypeOf(expr)
		//fmt.Printf("ty is :")
		//goon.Dump(ty)
	}

	switch expr.(type) {
	case *ast.BasicLit:
		e := expr.(*ast.BasicLit)
		fmt.Printf("=== *ast.BasicLit detected\n")
		fmt.Printf("expr is of kind: %s\n", e.Kind.String())
		switch e.Kind {
		case token.STRING:
			fmt.Printf(" we have a token.STRING.\n")
			le := len(e.Value)
			if e.Value[0] == '`' && e.Value[le-1] == '`' {
				fmt.Printf(" we have a string enclosed in backticks.\n")

				q := strconv.Quote(e.Value[1:(le - 1)])
				fmt.Printf(" return Quoted string: '%s'\n", q)
				return q, nil

				/*
					unq, err := strconv.Unquote(e.Value)
					if err == nil {
						fmt.Printf(" return Unquoted string: '%s'\n", unq)
						return unq, nil
					} else {
						fmt.Printf(" Unquote attempt returned err: %#v\n", err)
						return e.Value[1:(le - 1)], nil
					}
				*/

			}
		case token.INT:
			fmt.Printf(" we have a token.INT.\n")
		case token.FLOAT:
			fmt.Printf(" we have a token.FLOAT.\n")
		default:
			fmt.Printf("unrecognized token type: %#v\n", e.Kind)
		}

		return e.Value, nil
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
		argStr := ""
		call := "(" + pkg + "." + name + " " + argStr + ")"
		return call, nil
	default:
	}

	return line, nil // stubbed for now
}
