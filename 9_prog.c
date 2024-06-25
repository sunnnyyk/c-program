/*Write a C function void applyFunction(int arr[], int size,
 void (*func)(int *)) that takes an array, its size, and a pointer to a
  function that operates on each element of the array. 
  Write a sample function to double the value of each
   element and use applyFunction to apply it to an array.*/

#include <stdio.h>

void doubleValue(int *n) {
    *n = *n * 2;
}

void applyFunction(int arr[], int size, void (*func)(int *)) {
    for (int i = 0; i < size; i++) {
        func(&arr[i]);
    }
}

int main() {
 
    int arr[] = {1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);
    applyFunction(arr, size, doubleValue);
    printf("updtaeearray: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
