#include <stdio.h>
void swap(int* a, int* b) {
    int temp = *a;  
    *a = *b;        
    *b = temp;      
}

int main() {
    int x, y;    
    printf("Enter the x: ");
    scanf("%d", &x);
    printf("Enter the y: ");
    scanf("%d", &y);
    swap(&x, &y);
    printf("After swapping: x = %d, y = %d\n", x, y);

    return 0;
}
