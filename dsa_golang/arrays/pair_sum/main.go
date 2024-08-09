package main

import (
	"fmt"
	"strconv"
)

func main() {

	arr := [10]int{1, 2, 3, 4, 5, 10, 8, 18, 7, 6}
	sum := 20
	fmt.Printf("Finding the pair of sum %d in the array: %d\n", sum, arr)

	var pairs []string

	for i := 0; i < len(arr); i++ {
		for j := i + 1; j < len(arr); j++ {
			if arr[i]+arr[j] == sum {
				pair := "(" + strconv.Itoa(arr[i]) + ", " + strconv.Itoa(arr[j]) + ")"
				pairs = append(pairs, pair)
			}
		}
	}

	fmt.Printf("The possible pairs are: %s\n", pairs)

}
