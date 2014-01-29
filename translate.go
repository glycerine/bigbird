package main

import (
	"fmt"
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

	return line, nil // stubbed for now
}
