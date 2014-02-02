package main

import (
	"strings"
	"testing"

	cv "github.com/smartystreets/goconvey/convey"
)

// testing helper that panics on bad out
func toScheme(line string) string {
	anew := NewAccum()
	s, err := TranslateToScheme(line, anew)
	if err != nil {
		panic(err)
	}
	return strings.Join(s, "")
}

/*
func TestCanPrint(t *testing.T) {

	output := ""
	cv.Convey("Given a birdbrain repl", t, func() {

		cv.Convey("When we see a request to print 'hello bb'", func() {

			cv.Convey("then 'hello bb' should be printed", func() {
				cv.So(output, cv.ShouldEqual, "hello bb")
			})
		})
	})
}
*/

func TestConstantExpressions(t *testing.T) {

	cv.Convey("Given a birdbrain repl", t, func() {
		cv.Convey("When we evaluate numeric constants", func() {
			cv.Convey("they should stay the same", func() {
				cv.So(toScheme("1"), cv.ShouldEqual, "1")
				cv.So(toScheme("23456"), cv.ShouldEqual, "23456")
				cv.So(toScheme("1e40"), cv.ShouldEqual, "1e40")
				cv.So(toScheme("98764.321e12"), cv.ShouldEqual, "98764.321e12")
			})
		})
		cv.Convey("When we evaluate string constants", func() {
			cv.Convey("they should stay the same", func() {
				cv.So(toScheme("`abc`"), cv.ShouldEqual, `"abc"`)
				cv.So(toScheme(`"hello"`), cv.ShouldEqual, `"hello"`)
				cv.So(toScheme(`"I have spaces"`), cv.ShouldEqual, `"I have spaces"`)
				cv.So(toScheme(`"I have \"double\" quotes"`), cv.ShouldEqual, `"I have \"double\" quotes"`)
				cv.So(toScheme("`I have \nnewline`"), cv.ShouldEqual, `"I have \nnewline"`)
			})
			cv.Convey("raw strings should not have their back-ticks sent to scheme (since ` is macro defintion in scheme)", func() {
				cv.So(toScheme("a := `abc he\nya\"`"), cv.ShouldEqual, `(define a "abc he\nya\"")`)
			})

		})

		cv.Convey("When we evaluate //scm: comments", func() {
			cv.Convey("they should turn into pass-through scheme code", func() {
				cv.So(toScheme(`//scm:(write "hello")`), cv.ShouldEqual, `(write "hello")`)
				cv.So(toScheme(`// just a comment`), cv.ShouldEqual, `;;// just a comment`)

			})
		})

		cv.Convey("When we evaluate boolean literals", func() {
			cv.Convey("true in golang should become #t in scheme.", func() {
				cv.So(toScheme("true"), cv.ShouldEqual, "#t")
			})
			cv.Convey("false in golang should become #f in scheme.", func() {
				cv.So(toScheme("false"), cv.ShouldEqual, "#f")
			})
		})
	})
}

func TestIntegerVariables(t *testing.T) {

	cv.Convey("Given a birdbrain repl", t, func() {
		cv.Convey("When we declare and assign an integer variable", func() {
			cv.Convey("then we should get a scheme define expression in return. ", func() {

				cv.So(toScheme("a := 23"), cv.ShouldEqual, "(define a 23)")
				cv.So(toScheme(`str := "twentythree"`), cv.ShouldEqual, `(define str "twentythree")`)
			})
		})
		cv.Convey("When we just ask for the name of a variable", func() {
			cv.Convey("then we should get a request for the value of that variable. ", func() {
				cv.So(toScheme("a"), cv.ShouldEqual, "a")
				cv.So(toScheme("myVar"), cv.ShouldEqual, "myVar")
			})
		})

		cv.Convey("When we assign more than one variable in parallel in the same := stmt, all should be assigned.", func() {
			cv.So(toScheme("a, b := 10, 12"), cv.ShouldEqual, "(define a 10)(define b 12)")
		})
	})
}

func TestBinop(t *testing.T) {

	cv.Convey("Given a birdbrain repl", t, func() {
		cv.Convey("When we use addition as in: a + b", func() {
			cv.Convey("then we should get the prefix notation (+ a b)", func() {
				cv.So(toScheme("2 + 5"), cv.ShouldEqual, "(+ 2 5)")
			})
		})
		cv.Convey("When we use binary-operations in general", func() {
			cv.Convey("then we should get the prefix notation.", func() {
				cv.So(toScheme("2 * 5"), cv.ShouldEqual, "(* 2 5)")
				cv.So(toScheme("2 / 5"), cv.ShouldEqual, "(quotient 2 5)")
				cv.So(toScheme("2 - 5"), cv.ShouldEqual, "(- 2 5)")
				cv.So(toScheme("5 % 2"), cv.ShouldEqual, "(remainder 5 2)")

				cv.So(toScheme("5 / 2"), cv.ShouldEqual, "(quotient 5 2)") // integer division
				cv.So(toScheme("1 << 3"), cv.ShouldEqual, "(arithmetic-shift 1 3)")
				cv.So(toScheme("32 >> 3"), cv.ShouldEqual, "(arithmetic-shift 32 (- 3))")
				cv.So(toScheme("32 == 3"), cv.ShouldEqual, "(equal? 32 3)")

				cv.So(toScheme("5 ^ 1"), cv.ShouldEqual, "(bitwise-xor 5 1)") // == 4
				cv.So(toScheme("4 | 1"), cv.ShouldEqual, "(bitwise-ior 4 1)") // == 5
				cv.So(toScheme("5 & 1"), cv.ShouldEqual, "(bitwise-and 5 1)") // == 1

				// ~5 isn't a legal golang expression.
				//cv.So(toScheme("~5"), cv.ShouldEqual, "(bitwise-not 5)")      // 4611686018427387898

				cv.So(toScheme("true && false"), cv.ShouldEqual, "(and #t #f)")
				cv.So(toScheme("true || false"), cv.ShouldEqual, "(or #t #f)")

				cv.So(toScheme("5 &^ 1"), cv.ShouldEqual, "(bitwise-and 5 (bitwise-not 1))") // == 4

			})
		})

		cv.Convey("When we use unary-operations", func() {
			cv.Convey("then we should get the prefix notation.", func() {
				cv.So(toScheme("!false"), cv.ShouldEqual, "(not #f)")
				cv.So(toScheme("!true"), cv.ShouldEqual, "(not #t)")
				cv.So(toScheme("b := -a"), cv.ShouldEqual, "(define b (- a))")

			})
		})

		cv.Convey("When we use floating-point division, that is: a / b, for floating-point a or b", func() {
			cv.Convey("then we should get the prefix notation (/ a b).", func() {
				cv.So(toScheme("5.0 / 2.0"), cv.ShouldEqual, "(/ 5.0 2.0)") // floating-point
				cv.So(toScheme("a / b"), cv.ShouldEqual, "(/ a b)")         // floating-point
			})
		})

	})
}
