package main

import (
	"bytes"
	"fmt"
	"regexp"
	"strings"

	"code.google.com/p/go.tools/go/types"
)

var FuncNameRegex = regexp.MustCompile(`^[\t ]*func[\t ]+([^( ]+)[\t ]*[(]`)

func isFuncDefinition(line string) (bool, string) {
	trimmed := strings.TrimLeft(line, "\t ")
	if strings.HasPrefix(trimmed, "func ") {
		name := FuncNameRegex.FindStringSubmatch(line)
		//fmt.Printf("name is %#v\n", name)
		if name == nil || len(name) < 2 {
			return false, ""
		}
		return true, name[1]
	}
	return false, ""
}

func is64Bit(t *types.Basic) bool {
	return t.Kind() == types.Int64 || t.Kind() == types.Uint64 || t.Kind() == types.UntypedInt
}

func isUntypedInt(t *types.Basic) bool {
	return t.Kind() == types.UntypedInt
}

func encodeString(s string) string {
	buffer := bytes.NewBuffer(nil)
	for _, r := range []byte(s) {
		switch r {
		case '\b':
			buffer.WriteString(`\b`)
		case '\f':
			buffer.WriteString(`\f`)
		case '\n':
			buffer.WriteString(`\n`)
		case '\r':
			buffer.WriteString(`\r`)
		case '\t':
			buffer.WriteString(`\t`)
		case '\v':
			buffer.WriteString(`\v`)
		case '"':
			buffer.WriteString(`\"`)
		case '\\':
			buffer.WriteString(`\\`)
		default:
			if r < 0x20 || r > 0x7E {
				fmt.Fprintf(buffer, `\x%02X`, r)
				continue
			}
			buffer.WriteByte(r)
		}
	}
	return `"` + buffer.String() + `"`
}
