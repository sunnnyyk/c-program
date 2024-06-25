/*Write a C program to create a function pointer that points to a 
function int add(int, int). Use the function pointer to call the 
add function and print the result.*/

#include <stdio.h>

int add(int a, int b) {
    return a + b;
}

int main() {
    
    int (*func_ptr)(int, int);
    func_ptr = add;
    int result = func_ptr(5, 3);
    printf("The sum of 5 and 3 is: %d\n", result);

    return 0;
}
