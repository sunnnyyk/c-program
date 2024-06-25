/*Write a C program to create an integer array of size 5,
 initialize it with values from 1 to 5, and then use pointer 
 arithmetic to print each element of the array.*/

 #include <stdio.h>

int main() {
    
    int array[5];
    for (int i = 0; i < 5; i++) {
        array[i] = i + 1;
    }
       
    int *ptr = array; 
    printf("array elements are:\n");
    for (int i = 0; i < 5; i++) {
        printf("%d ", *(ptr + i));
    }
    
    return 0;
}
