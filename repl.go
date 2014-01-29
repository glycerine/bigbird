package main

import (
	"fmt"

	linenoise "github.com/GeertJohan/go.linenoise"
	"github.com/glycerine/bigbird/gochick"
)

func main() {
	gochick.Start()

	for {
		line, err := linenoise.Line("> ")
		if err != nil {
			if err.Error() == "prompt was quited with a killsignal" {
				//fmt.Printf("ignoring: prompt was quited with a killsignal\n")
				continue
			}
			fmt.Printf("error: %v\n", err)
			continue
		}
		//fmt.Printf("line is %v\n", line)

		/*
			fset := token.NewFileSet()
			f, err := parser.ParseFile(fset, "", interface{}(line), parser.Trace)
			if err != nil {
				fmt.Printf("parse error: %v\n", err)
				continue
			}
			if f == nil {
				fmt.Printf("ast returned was nil\n")
			} else {
				fmt.Printf("f is %v\n", f)
			}
		*/
		schemeSrc := line

		s := gochick.Eval(schemeSrc)
		fmt.Printf("%v\n", s)
	}
}
