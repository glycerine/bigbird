package main

import (
	"fmt"
	"go/ast"
	"go/parser"
	"go/token"
)

func TranslateToScheme(line string) (string, error) {
	// TODO: implement the translation from go to scheme

	var Ast *ast.File
	var err error
	wrapper := `
     package main
     import (
       "fmt"
     )
     func main() {
        maincode := 0
        %s
        fmt.Printf("\n :maincode = %%d.\n", maincode)
     }
`

	wrapped := fmt.Sprintf(wrapper, line)
	fmt.Printf("wrapped line is: '%s'\n", wrapped)

	if bParsing {
		// first step of translating from golang to scheme:
		//  parse the go code using the standard libraries
		//  token and parse
		fset := token.NewFileSet()
		Ast, err = parser.ParseFile(fset, "", interface{}(wrapped), parser.Trace)
		if err != nil {
			fmt.Printf("parse error: %v\n", err)
			return "", err
		}
		if Ast == nil {
			fmt.Printf("Ast returned was nil\n")
		} else {
			fmt.Printf("Ast is %v\n", Ast)
		}
	}

	return line, nil // stubbed for now
}
