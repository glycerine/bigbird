package main

import (
	"fmt"
	"go/ast"
	"go/parser"
	"go/token"
	"strings"
)

func TranslateToScheme(line string, ac *Accum) ([]string, error) {
	// TODO: implement the translation from go to scheme

	r := make([]string, 0)

	tr := strings.TrimLeft(line, "\t ")
	if len(tr) >= 2 && tr[0] == '/' && tr[1] == '/' {
		//fmt.Printf("detected // comment\n")
		if len(tr) > 6 && tr[:6] == "//scm:" {
			//fmt.Printf("detected //scm: comment, passing through the rest of the line : '%s'.\n", tr[6:])
			r = append(r, tr[6:])
			return r, nil
		} else {
			r = append(r, ";;"+line)
			return r, nil
		}
	}

	schemeSrc, err := ParseAndType(line, ac)
	if err != nil {
		return r, err
	}
	for i := range schemeSrc {
		r = append(r, schemeSrc[i])
	}
	return r, err

}

func shouldSkipSavingLine(line string, errList []error) bool {

	for _, er := range errList {
		serr := er.Error()

		if strings.Contains(serr, "is not used") && strings.Contains(serr, "constant") {
			return true
		}
		if strings.Contains(serr, "undeclared name:") {
			return true
		}
	}

	return false
}

// allow through:
// no new variables on left side of :=

func keepError(err error) bool {
	serr := err.Error()

	if strings.Contains(serr, "is not used") {
		return false
	}

	if strings.Contains(serr, "declared but not used") {
		return false
	}

	if strings.Contains(serr, "undeclared name") {
		return false
	}

	if strings.Contains(serr, "no new variables on left side of :=") {
		return false
	}

	return true
}

func ParseAndType(line string, ac *Accum) ([]string, error) {

	skipSave := false

	fset := token.NewFileSet()

	tmp := *ac
	tmp.goLine = append(ac.goLine, line)

	wrap := tmp.GenCode()
	//fmt.Printf("wrap from tmp.GenCode() is:\n%#v\n", wrap)

	// parse
	var parseErr error = nil
	f, err := parser.ParseFile(fset, "", wrap, parser.ParseComments|parser.DeclarationErrors)
	if err != nil {
		parseErr = err
	}

	// type-check
	errList := tmp.Check(fset, []*ast.File{f})

	if parseErr != nil {
		errList = append(errList, parseErr)
	}

	withoutUnusedErrs := make([]error, 0)

	if len(errList) > 0 {
		//fmt.Printf("bb: type-check errors: %#v.\n", errList)
		for _, er := range errList {
			if keepError(er) {
				withoutUnusedErrs = append(withoutUnusedErrs, er)
			}
		}
	}

	if len(withoutUnusedErrs) > 0 {
		fmt.Printf("bb: type-checking error(s): %#v\n", withoutUnusedErrs)
	}

	//fmt.Printf("\n bird: ParseFile output *ast.File, f is :\n")
	//goon.Dump(f)

	//fmt.Printf("\n bird: len(f.Decls[0]) is: %d\n", len(f.Decls))
	mainLoc := -1
	for i := range f.Decls {
		//fmt.Printf("\n bird expose: decl[%d] = \n", i)
		//goon.Dump(f.Decls[i])
		fun, ok := f.Decls[i].(*ast.FuncDecl)
		if ok {
			if fun.Name.Name == "main" {
				mainLoc = i
				break
				//fmt.Printf("we found main at index %d of f.Decls\n", i)
			} else {
				//fmt.Printf("index %d of f.Decls was a FuncDecl but not called main().\n", i)
			}
		} else {
			//fmt.Printf("index %d of f.Decls was not a FuncDecl.\n", i)
		}
	}
	//fmt.Printf("\n bird: f.Decls[0] is: \n")
	//goon.Dump(f.Decls[0])

	//genDecl := f.Decls[0].(*ast.GenDecl)
	//fmt.Printf("\n bird: genDecl is: \n")
	//goon.Dump(genDecl)

	mainParse := f.Decls[mainLoc].(*ast.FuncDecl)
	body := mainParse.Body
	//	fmt.Printf("\n bird: f.Decls[0].Body is: %#v\n", body)

	blen := len(body.List)
	lastStmt := body.List[blen-1]
	//fmt.Printf("\n bird: body is:\n")
	//goon.Dump(body)

	// special case Ident alone, we're just asking for a value
	switch lastStmt.(type) {
	case *ast.ExprStmt:
		v := lastStmt.(*ast.ExprStmt)
		switch (v.X).(type) {
		case *ast.BasicLit:
			//fmt.Printf("Detected basic literal, skip saving.\n")
			skipSave = true
		case *ast.Ident:
			//fmt.Printf("Detected Ident, skip saving.\n")
			skipSave = true
		}
		//fmt.Printf("our ExprStmt is:\n")
		//goon.Dump(v)
	default:
		//fmt.Printf("ty is type:\n")
		//goon.Dump(ty)
	}

	schemeLines, err := ParseStmt(lastStmt, line, ac)

	if err != nil {
		errList = append(errList, err)
	}
	if !skipSave && !shouldSkipSavingLine(line, errList) &&
		// we also skip saving if we didn't get a scheme version back:
		len(schemeLines) > 0 && len(schemeLines[0]) > 0 {

		//fmt.Printf("bb: no type-check errors detected, saving statement.\n")
		//tmp.goLine = append(tmp.goLine, line)

		*ac = tmp
		start := len(ac.schLine)
		ac.schLine = append(ac.schLine, schemeLines...)
		end := len(ac.schLine)
		myGoLine := len(ac.goLine) - 1
		ac.go2sch[myGoLine] = []int{start, end}

		//fmt.Printf("bb kept line: total source after line '%s' -> %d:'%v' is now:\n======\n%v\n======\n", line, len(schemeLines), schemeLines, ac.GenCode())

		return schemeLines, nil
	}
	//fmt.Printf("bb skipped line: total source after line '%s' is now:\n======\n%v\n======\n", line, ac.GenCode())

	return schemeLines, nil
}
