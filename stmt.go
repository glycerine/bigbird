package main

import (
	"fmt"
	"go/ast"
	"go/parser"
	"go/token"

	"github.com/shurcooL/go-goon"
)

func ParseStmt(line string) (string, error) {
	fmt.Printf("bird.ParseStmt() called.\n")

	fset := token.NewFileSet()
	wrap := "package main; func main() { " + line + " }"
	//f, err := parser.ParseFile(fset, "", wrap, parser.ParseComments|parser.Trace|parser.DeclarationErrors)
	f, err := parser.ParseFile(fset, "", wrap, parser.ParseComments|parser.DeclarationErrors)
	if err != nil {
		panic(err)
	}

	fmt.Printf("\n bird: ParseFile output *ast.File, f is :\n")
	goon.Dump(f)

	fmt.Printf("\n bird: f.Decls[0] is: \n")
	goon.Dump(f.Decls[0])

	mainParse := f.Decls[0].(*ast.FuncDecl)
	body := mainParse.Body
	//	fmt.Printf("\n bird: f.Decls[0] is: %#v\n", mainParse)
	fmt.Printf("\n bird: f.Decls[0].Body is: %#v\n", body)

	firstStmt := body.List[0]
	fmt.Printf("\n bird: firstStmt is:\n")
	goon.Dump(firstStmt)

	switch firstStmt.(type) {
	case *ast.AssignStmt:
		fmt.Printf("bird: *ast.AssignStmt found.\n")
	}

	return fmt.Sprintf(""), nil
}
