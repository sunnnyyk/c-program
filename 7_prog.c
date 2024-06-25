/*Write a C function int* createArray(int size) that dynamically 
allocates an array of integers of the given size and returns a pointer 
to the array. Initialize the array with values from 1 to size 
and print the array in the main function.*/

#include <stdio.h>
#include <stdlib.h>

int* createArray(int size) {
    int *array = (int *)malloc(size * sizeof(int));
    
    for (int i = 0; i < size; i++) {
        array[i] = i + 1;
    }
    return array;
}

int main() {
    
    int size = 10;
    int *array = createArray(size);
    printf("Array values:\n");
    for (int i = 0; i < size; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");
    free(array)

    return 0;
}
