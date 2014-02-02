package main

import "code.google.com/p/go.tools/go/types"

func is64Bit(t *types.Basic) bool {
	return t.Kind() == types.Int64 || t.Kind() == types.Uint64
}
