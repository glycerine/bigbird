package main

import (
	"errors"
	"fmt"
	"go/ast"
)

func ParseStmt(firstStmt ast.Stmt, line string, ac *Accum) ([]string, error) {
	//fmt.Printf("bird.ParseStmt() called.\n")

	r := make([]string, 0)

	switch firstStmt.(type) {

	case *ast.ExprStmt:
		x := firstStmt.(*ast.ExprStmt)
		tx := ac.translateExpr(x.X)
		if ac.err != nil {
			return r, ac.err
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
		lhsScm := ac.TranslateExprSlice(lhs)
		if ac.err != nil {
			return r, ac.err
		}

		rhsScm := ac.TranslateExprSlice(rhs)
		if ac.err != nil {
			return r, ac.err
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
