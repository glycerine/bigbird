package main

// Accum and type-checking code

import (
	"go/ast"
	"strings"

	"code.google.com/p/go.tools/go/types"
)

type Accum struct {
	pkgLine    string
	importLine []string
	pre        []string
	goLine     []string
	post       []string

	go2sch  map[int][]int // map goLine indices to schLine indices
	schLine []string

	info *types.Info
	pkg  *types.Package
}

func NewAccum() *Accum {
	ac := &Accum{}
	ac.pkgLine = "package main"
	ac.importLine = []string{"fmt"}
	ac.pre = []string{`func HelloBirdBrain() { fmt.Printf("HelloBirdBrain() called.\n") }`, "\n", "func main() {"}
	ac.post = []string{"}"}
	ac.goLine = make([]string, 0)
	ac.go2sch = make(map[int][]int)

	ac.info = &types.Info{
		Types:      make(map[ast.Expr]types.TypeAndValue),
		Objects:    make(map[*ast.Ident]types.Object),
		Implicits:  make(map[ast.Node]types.Object),
		Selections: make(map[*ast.SelectorExpr]*types.Selection),
	}

	return ac
}

var emptyAccum *Accum = NewAccum()

func (ac *Accum) GenCode() string {
	code := ac.pkgLine + "\nimport (\n" + strings.Join(ac.importLine, "\n") + ")\n" + strings.Join(ac.pre, "\n") +
		strings.Join(ac.goLine, "\n") + strings.Join(ac.post, "\n")
	return code
}

type ErrorList []error

var sizes32 = &types.StdSizes{WordSize: 4, MaxAlign: 8}
var typesPackages = make(map[string]*types.Package)
