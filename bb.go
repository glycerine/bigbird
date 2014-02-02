package main

import (
	"bufio"
	"fmt"
	"os"
	"strings"

	"github.com/glycerine/bigbird/gochick"
)

func init() {
	gochick.Start()
}

type Accum struct {
	pkgLine    string
	importLine []string
	pre        []string
	goLine     []string
	post       []string

	go2sch map[int][]string
}

func NewAccum() *Accum {
	ac := &Accum{}
	ac.pkgLine = "package main"
	ac.importLine = []string{"fmt"}
	ac.pre = []string{`func HelloBirdBrain() { fmt.Printf("HelloBirdBrain() called.\n") }`, "\n", "func main() {"}
	ac.post = []string{"}"}
	ac.goLine = make([]string, 0)
	ac.go2sch = make(map[int][]string)
	return ac
}

var emptyAccum *Accum = NewAccum()

func (ac *Accum) GenCode() string {
	code := ac.pkgLine + "\nimport (\n" + strings.Join(ac.importLine, "\n") + ")\n" + strings.Join(ac.pre, "\n") +
		strings.Join(ac.goLine, "\n") + strings.Join(ac.post, "\n")
	return code
}

func main() {

	fmt.Printf("Welcome the birdbrain repl! press ctrl-d to exit.\n")

	scanner := bufio.NewScanner(os.Stdin)

	lineNumber := 0
	line := ""
	var ok bool
	ac := NewAccum() // accumulated source code, for type-checking

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

		fmt.Printf("line is: '%s'\n", line)

		// step two: translate from golang to scheme
		schemeSrc, err := TranslateToScheme(line, ac)
		if err != nil {
			fmt.Printf("error on TranslateToScheme: '%v'\n", err)
			continue
		}

		// step three: evaluate in the chicken-scheme repl
		fmt.Printf("tranlation to schemeSrc is: %#v\n", schemeSrc)

		for i := range schemeSrc {
			s := gochick.Eval(schemeSrc[i])
			fmt.Printf("chicken-scheme eval result: '%s'\n", s)
		}
	}
}
