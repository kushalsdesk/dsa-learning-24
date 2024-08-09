package main

import "fmt"

func main() {
	arr := [10]int{1, 2, 3, 4, 5, 10, 8, 18, 7, 6}
	fmt.Printf("Finding max value from the array:%d\n", arr)
	var max, index int
	max = arr[0]
	for i := range arr {
		if arr[i] > max {
			max = arr[i]
			index = i
		}

	}
	fmt.Printf("The maximum value is: %d at index %d \n", max, index)
}
