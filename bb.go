package main

import (
	"bufio"
	"fmt"
	"os"

	"github.com/glycerine/bigbird/gochick"
)

var bParsing bool

func main() {
	gochick.Start()

	fmt.Printf("Welcome the birdbrain repl! press ctrl-d to exit.\n")

	scanner := bufio.NewScanner(os.Stdin)

	lineNumber := 0
	line := ""
	var ok bool

	for {
		// step one: read a line from the user on stdin
		lineNumber++
		fmt.Printf("%04d bb> ", lineNumber)
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

		// step two: translate from golang to scheme
		schemeSrc, err := TranslateToScheme(line)
		if err != nil {
			fmt.Printf("error on TranslateToScheme: '%v'\n", err)
		}

		// step three: evaluate in the chicken-scheme repl
		s := gochick.Eval(schemeSrc)
		fmt.Printf("chicken-scheme eval result: '%s'\n", s)
	}
}
