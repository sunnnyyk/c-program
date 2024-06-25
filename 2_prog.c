/*WAP to create a pointer to a pointer for an
 integer variable. Initialize the integer variable with a value,
  and then print its value using both the single 
  pointer and the pointer to pointer.*/

  #include <stdio.h>

int main() {
    int num = 42;   
    int *ptr = &num;   
    int **ptr_to_ptr = &ptr;
   
    printf(" pointer to pointer value: %d\n", **ptr_to_ptr);

    return 0;
}
