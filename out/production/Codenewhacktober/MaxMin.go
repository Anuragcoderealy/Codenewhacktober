package main

import "fmt"

func main() {
	/* local variable definition */
	var a int = 100
	var b int = 200
	var retmax int
	var retmin int

	/* calling a function to get max value */
	retmax = max(a, b)
	retmin = min(a,b)

	fmt.Printf("Max value is : %d\n", retmax)
	fmt.Printf("Min value is : %d\n", retmin)
}

/* function returning the max between two numbers */
func max(num1, num2 int) int {
	/* local variable declaration */
	var result int

	if num1 > num2 {
		result = num1
	} else {
		result = num2
	}
	return result
}

/* function returing the min between two numbers*/

func min(num1,num2 int) int{
	var result int

	if num1 < num2 {
		result =num1
	}else{
		result= num2
	}
	return result
}

