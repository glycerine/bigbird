package gochick

import (
	"fmt"
	"strconv"

	"testing"

	cv "github.com/smartystreets/goconvey/convey"
)

func TestChickenStartAndEval(t *testing.T) {

	cv.Convey("Given a scheme squaring function", t, func() {

		cv.Convey("We should see (sq 5) == 25", func() {
			Start()
			s := Eval("(define (sq x) (* x x))")
			s2 := Eval("(sq 5)")
			fmt.Printf("after CHICKEN_eval(): %v  %v ", s, s2)
			num, err := strconv.Atoi(s2)
			if err != nil {
				panic(err)
			}
			cv.So(num, cv.ShouldEqual, 25)
		})
	})
}
