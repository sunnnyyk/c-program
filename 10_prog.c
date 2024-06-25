/*Write a C function that uses a static variable to count how many times 
the function has been called. Test this function in the main program by 
calling it multiple times and printing the count.*/

#include <stdio.h>

void countCalls() {
    static int count = 0;  
    count++; 
    printf(" function  called %d times.\n", count);
}

int main() {
    countCalls();
    countCalls();
    countCalls();
    countCalls();

    return 0;
}
