package main

import "fmt"

func main() {

	arr := [10]int{1, 2, 3, 4, 5, 10, 8, 18, 7, 6}
	fmt.Printf("Finding the number of evens in the array: %d\n", arr)
	count := 0
	for i := range arr {
		if arr[i]%2 == 0 {
			count++
		}
	}
	fmt.Printf("The number of evens in the array is: %d\n", count)
}
