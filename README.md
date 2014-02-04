bigbird
=======
This is the beginnings of a port of the lovely ([gopherjs (go -> javascript) transpiler](https://github.com/neelance/gopherjs)) to produce a scheme-based repl and transpiler from Go -> scheme. For now we use chicken scheme for its nice incremental gc and easy C integration.

The project is called bigbird. The repl itself is called birdbrain.

Status: incomplete, just starting. Run "go test -v" and see bb_test.go (and any other _test.go files that may be added) 
to discern what tests are in place. All tests should pass at all times; this is BDD after all. 

To summarize: string, boolean and numeric constants work. Assignment works, but swapping with parallel assignment is not special-cased as it should be (e.g. "a, b = b, a" will fail currently). Most binary operators work. Simple function definitions of short functions work. fmt.Printf is handled to provide diagnostic printing. 

If scheme support gets far enough, the eventual plan is to port to Clojure, taking advantage of Clojure's implementation of channels and go-routines as well as the mature JVM runtime and library set.

MIT or Apache2 license.

