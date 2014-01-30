package main

import (
	"testing"

	cv "github.com/smartystreets/goconvey/convey"
)

// testing helper that panics on bad out
func toScheme(line string) string {
	s, err := TranslateToScheme(line)
	if err != nil {
		panic(err)
	}
	return s
}

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

func TestBasicExpressions(t *testing.T) {

	cv.Convey("Given a birdbrain repl", t, func() {
		cv.Convey("When we evaluate constants", func() {
			cv.Convey("they should stay the same", func() {
				cv.So(toScheme("1"), cv.ShouldEqual, "1")
				cv.So(toScheme("23456"), cv.ShouldEqual, "23456")
				cv.So(toScheme("1e11"), cv.ShouldEqual, "1e11")
			})
		})
	})
}
