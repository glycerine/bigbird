package main

import (
	"fmt"
	"regexp"
	"strings"
)

func Q(x int, y int) {
	fmt.Printf("r ==  %d %% %d == %d,   and q == x/y = %d\n", x, y, x%y, x/y)
}

func andNot(x int, y int) {
	fmt.Printf(" x(%d) &^ y(%d) == %d\n", x, y, x&^y)
}

func main() { // %    /
	//Q(x, y)   x = q*y + r
	// x   y      r   q
	Q(-5, -2) // -1,  2;  -5 == 2*-2 + -1, checks ok.
	Q(-5, 2)  // -1, -2;  -5 == -2*2 + -1, checks ok.
	Q(5, -2)  //  1, -2;   5 == -2*-2 + 1, checks ok.
	Q(5, 2)   //  1,  2;   5 == 2*2   + 1, checks ok.

	fmt.Printf("   \n")
	Q(5, 3)   // r == 2
	Q(-5, 3)  // r == -2
	Q(5, -3)  // r == 2
	Q(-5, -3) // r == -2

	fmt.Printf("\n")
	andNot(7, 5)
	andNot(7, 4)
	andNot(7, 2)
	andNot(7, 1)
	andNot(7, 0)

	var v int = 5
	fmt.Printf("signed ^5 == %d\n", ^v)

	var u uint = 5
	fmt.Printf("unsigned ^5 == %d\n", ^u)

	fmt.Printf("5 &^ 1 == %d\n", 5&^1)

	is, nm := isFuncDefinition("func hi()")
	fmt.Printf("%#v : %v\n", nm, is)
}

func incr(x int) int { return x + 1 }

var FuncNameRegex = regexp.MustCompile(`^[\t ]*func[\t ]+([^( ]+)[\t ]*[(]`)

func isFuncDefinition(line string) (bool, string) {
	trimmed := strings.TrimLeft(line, "\t ")
	if strings.HasPrefix(trimmed, "func ") {
		name := FuncNameRegex.FindStringSubmatch(line)
		fmt.Printf("name is %#v\n", name)
		if name == nil || len(name) < 2 {
			return false, ""
		}
		return true, name[1]
	}
	return false, ""
}
