package gochick

// #include <stdlib.h>
// #include <chicken/chicken.h>
// #cgo LDFLAGS: -lchicken -lm -ldl
import "C"
import (
	"fmt"
	"strings"
	"unsafe"
)

func Random() int {
	return int(C.random())
}

func Seed(i int) {
	C.srandom(C.uint(i))
}

func Start() {
	C.CHICKEN_run(C.C_default_5fstub_toplevel) // CHICKEN_default_toplevel macro aims at this;
	// see suggestion to use CHICKEN_default_toplevel here:
	// http://lists.nongnu.org/archive/html/chicken-users/2005-08/msg00132.html
}

func Eval(s string) string {
	cs := C.CString(s)
	defer C.free(unsafe.Pointer(cs))

	oss := strings.Repeat(" ", 4096)
	cos := C.CString(oss)
	defer C.free(unsafe.Pointer(cos))

	C.CHICKEN_eval_string_to_string(cs, cos, 4096)
	goString := C.GoString(cos)
	if goString == "#<unspecified>" {
		fmt.Printf("%s detected.\n", goString)
		goString = ""
	}
	return strings.TrimSpace(goString)
}
