package main

import (
	"fmt"
	"strings"

	"code.google.com/p/go.tools/go/types"
)

func (c *Accum) initArgs(ty types.Type) string {
	switch t := ty.(type) {
	case *types.Array:
		return fmt.Sprintf("%s, %d", c.typeName(t.Elem()), t.Len())
	case *types.Chan:
		return fmt.Sprintf("%s, %t, %t", c.typeName(t.Elem()), t.Dir()&types.SendOnly != 0, t.Dir()&types.RecvOnly != 0)
	case *types.Interface:
		methods := make([]string, t.NumMethods())
		for i := range methods {
			method := t.Method(i)
			pkgPath := ""
			if !method.Exported() {
				pkgPath = method.Pkg().Path()
			}
			methods[i] = fmt.Sprintf(`["%s", "%s", %s]`, method.Name(), pkgPath, c.typeName(method.Type()))
		}
		return fmt.Sprintf("[%s]", strings.Join(methods, ", "))
	case *types.Map:
		return fmt.Sprintf("%s, %s", c.typeName(t.Key()), c.typeName(t.Elem()))
	case *types.Pointer:
		return fmt.Sprintf("%s", c.typeName(t.Elem()))
	case *types.Slice:
		return fmt.Sprintf("%s", c.typeName(t.Elem()))
	case *types.Signature:
		return fmt.Sprintf("%s, %s, %t", c.typeArray(t.Params()), c.typeArray(t.Results()), t.Variadic())
	case *types.Struct:
		fields := make([]string, t.NumFields())
		for i := range fields {
			field := t.Field(i)
			name := ""
			if !field.Anonymous() {
				name = field.Name()
			}
			pkgPath := ""
			if !field.Exported() {
				pkgPath = field.Pkg().Path()
			}
			fields[i] = fmt.Sprintf(`["%s", "%s", %s, %s]`, name, pkgPath, c.typeName(field.Type()), encodeString(t.Tag(i)))
		}
		return fmt.Sprintf("[%s]", strings.Join(fields, ", "))
	default:
		panic("invalid type")
	}
}
