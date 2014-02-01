package main

import (
	"fmt"
	"go/ast"

	"github.com/shurcooL/go-goon"
)

func TranslateExpr(rhs ast.Expr) (string, error) {
	fmt.Printf("TranslateExpr called with rhs:\n")
	goon.Dump(rhs)
	return "", nil
}
