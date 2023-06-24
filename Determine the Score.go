package main

import "fmt"

func main() {
	var t int
	fmt.Scanf("%d", &t)
	for t != 0 {
		var x, y int
		fmt.Scanf("%d %d", &x, &y)
		point := x / 10
		fmt.Printf("%d\n", point*y)
		t--
	}
	return
}
