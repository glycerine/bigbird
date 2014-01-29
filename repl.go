package main

import (
	"bufio"
	"fmt"
	"os"

	"go/parser"
	"go/token"
	"github.com/glycerine/bigbird/gochick"
)

func main() {
	gochick.Start()

	bParsing := false
	scanner := bufio.NewScanner(os.Stdin)

	lineNumber := 0
	line := ""
	var ok bool

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

	for {
		lineNumber++
		fmt.Printf("%04d > ", lineNumber)
		ok = scanner.Scan()
		if !ok {
			fmt.Printf("\nok was false. quitting.\n")
			os.Exit(0)
		}

		if err := scanner.Err(); err != nil {
			panic(err)
		}
		line = scanner.Text()

		if line == ".parseoff" {
			bParsing = false
			fmt.Printf("parsing as golang off.\n")
			continue
		}

		if line == ".parseon" {
			bParsing = true
			fmt.Printf("parsing as golang on.\n")
			continue
		}

		fmt.Printf("line is: '%s'\n", line)

		wrapped := fmt.Sprintf(wrapper, line)
		fmt.Printf("wrapped line is: '%s'\n", wrapped)

		if bParsing {
			// first step of translating from golang to scheme:
			//  parse the go code using the standard libraries
			//  token and parse
			fset := token.NewFileSet()
			f, err := parser.ParseFile(fset, "", interface{}(wrapped), parser.Trace)
			if err != nil {
				fmt.Printf("parse error: %v\n", err)
				continue
			}
			if f == nil {
				fmt.Printf("ast returned was nil\n")
			} else {
				fmt.Printf("ast in f is %v\n", f)
			}
		}

		// step two: translate from golang to scheme
		schemeSrc := line

		// step three: evaluate in the chicken-scheme repl
		s := gochick.Eval(schemeSrc)
		fmt.Printf("chicken-scheme eval result: '%s'\n", s)
	}
}
