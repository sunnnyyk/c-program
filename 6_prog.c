/*Write a C function int factorial(int n) that calculates the 
factorial of a given number using recursion. Test this function 
in the main program by calculating and printing the factorial of 5.*/

#include <stdio.h>

int factorial(int n) {
    if (n <= 1) {
        return 1;
    } else {
        return n * factorial(n - 1);
    }
}

int main() {
    
    int number = 5;
    int result = factorial(number);
    printf("The factorial of %d is: %d\n", number, result);

    return 0;
}
