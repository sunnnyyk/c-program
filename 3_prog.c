/*Write a C function void swap(int *a, int *b) that swaps the
 values of two integers. Then, write a main function to test this
  swap function using pointer arguments.*/

  #include <stdio.h>

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}
int main() {
    
    int x = 10;
    int y = 20;
    swap(&x, &y);

    printf("Afterrr swapping:\n");
    printf("x = %d, y = %d\n", x, y);

    return 0;
}
