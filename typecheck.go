package main

// Accum and type-checking code

import (
	"go/ast"
	"go/token"

	"code.google.com/p/go.tools/go/types"
)

func (ac *Accum) Check(fileSet *token.FileSet, files []*ast.File) {

	// type checking, derived from the example in gopherjs, see tool.go and package.go
	var errList ErrorList
	var previousErr error
	config := &types.Config{
		Packages: typesPackages,
		Import:   nil,
		Sizes:    sizes32,
		Error: func(err error) {
			if previousErr != nil && previousErr.Error() == err.Error() {
				return
			}
			errList = append(errList, err)
			previousErr = err
		},
	}
	typesPkg, err := config.Check("bb.go", fileSet, files, ac.info)
	if errList != nil {
		panic(errList)
		//return nil, errList
	}
	if err != nil {
		panic(err)
		//return nil, err
	}

	ac.pkg = typesPkg
}
