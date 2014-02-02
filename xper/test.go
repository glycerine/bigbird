package main

import "fmt"

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
}
