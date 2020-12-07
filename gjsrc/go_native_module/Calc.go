package main

import "C"

//export Add
func Add(x, y int) int {
    return x + y;
}
//export Sub
func Sub(x, y int) int {
    return x - y;
}
//export Factorial
func Factorial(n uint) uint {
    if n == 0 || n == 1{
        return 1
    } else {
        return n * Factorial(n-1)
    }
}


func main() {

}