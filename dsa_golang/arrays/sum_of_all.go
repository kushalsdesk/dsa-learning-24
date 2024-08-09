package main

import "fmt"

func main() {
	fmt.Println("Sum of all Elements")

	arr := [...]int{1, 2, 3, 1, 1}

	var sum int = 0
	for _, v := range arr {
		sum += v
	}

	fmt.Println("sum of all ints", sum)
}
