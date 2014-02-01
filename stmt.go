package main

import (
	"errors"
	"go/ast"
	"go/parser"
	"go/token"
)

func ParseStmt(line string) (string, error) {
	//fmt.Printf("bird.ParseStmt() called.\n")

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
	//	fmt.Printf("\n bird: firstStmt is:\n")
	//	goon.Dump(firstStmt)

	switch firstStmt.(type) {
	case *ast.AssignStmt:
		//fmt.Printf("bird: *ast.AssignStmt found.\n")
		e := firstStmt.(*ast.AssignStmt)
		lhs := e.Lhs
		rhs := e.Rhs
		if len(lhs) < 1 {
			return "", errors.New("no left hand side of assignment")
		}
		if len(rhs) < 1 {
			return "", errors.New("no right hand side of assignment")
		}
		lhsScm, err := TranslateExpr(lhs[0])
		if err != nil {
			return "", err
		}

		rhsScm, err := TranslateExpr(rhs[0])
		if err != nil {
			return "", err
		}
		return "(define " + lhsScm + " " + rhsScm + ")", nil
	}

	return "", nil
}
