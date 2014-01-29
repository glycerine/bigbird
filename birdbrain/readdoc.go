package main

// http://stackoverflow.com/questions/19580688/go-parser-not-detecting-doc-comments-on-struct-type

import (
	"fmt"
	"go/doc"
	"go/parser"
	"go/token"
)

// FirstType docs
type FirstType struct {
	// FirstMember docs
	FirstMember string
}

// SecondType docs
type SecondType struct {
	// SecondMember docs
	SecondMember string
}

// Main docs
func main() {
	fset := token.NewFileSet() // positions are relative to fset

	d, err := parser.ParseDir(fset, "./", nil, parser.ParseComments)
	if err != nil {
		fmt.Println(err)
		return
	}

	for k, f := range d {
		fmt.Println("package", k)
		p := doc.New(f, "./", 0)

		for _, t := range p.Types {
			fmt.Println("  type", t.Name)
			fmt.Println("    docs:", t.Doc)
		}
	}
}
