bigbird
=======
This is the beginnings of a port of the lovely ([gopherjs (go -> javascript) transpiler](https://github.com/neelance/gopherjs)) to produce a scheme-based repl and transpiler from Go -> scheme. For now we use chicken scheme for its nice incremental gc and easy C integration.

The project is called bigbird. The repl itself is called birdbrain.

Status: very incomplete, just starting. Run "go test -v" and see bb_test.go (and any other _test.go files that may be added) 
to discern what tests pass. To summarize: string, boolean and numeric constants work. Assignment works, but swapping with parallel assignment is not special-cased as it should be. Most binary operators work.

If scheme support gets far enough, the eventual plan is to port to Clojure, taking advantage of Clojure's implementation of channels and go-routines, and JVMs mature runtime.

MIT or Apache2 license.

