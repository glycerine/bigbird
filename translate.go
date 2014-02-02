package main

import "strings"

func TranslateToScheme(line string, ac *Accum) ([]string, error) {
	// TODO: implement the translation from go to scheme

	r := make([]string, 0)

	tr := strings.TrimLeft(line, "\t ")
	if len(tr) >= 2 && tr[0] == '/' && tr[1] == '/' {
		//fmt.Printf("detected // comment\n")
		if len(tr) > 6 && tr[:6] == "//scm:" {
			//fmt.Printf("detected //scm: comment, passing through the rest of the line : '%s'.\n", tr[6:])
			r = append(r, tr[6:])
			return r, nil
		} else {
			r = append(r, ";;"+line)
			return r, nil
		}
	}

	src, err := ParseStmt(line, ac)
	if err != nil {
		return r, err
	}
	for i := range src {
		r = append(r, src[i])
	}
	return r, err

}
