package main

import (
	"strings"
	"testing"

	cv "github.com/smartystreets/goconvey/convey"
)

// testing helper that panics on bad out
func toScheme(line string) string {
	s, err := TranslateToScheme(line)
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
