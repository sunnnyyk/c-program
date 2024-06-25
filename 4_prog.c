/*Write a C program to dynamically allocate memory for an array of 
integers of size 10. Initialize the array with values from 1 to 10, 
then print the values and free the allocated memory.*/

#include <stdio.h>
#include <stdlib.h>

int main() {
    
    int *array = (int *)malloc(10 * sizeof(int));
    
    for (int i = 0; i < 10; i++) {
        array[i] = i + 1;
    }
    printf("Array values:\n");
    for (int i = 0; i < 10; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");
    free(array);

    return 0;
}
