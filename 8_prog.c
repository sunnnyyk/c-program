/*Write a C program to create an array of function pointers, where each 
function takes two integers as arguments and returns an integer. 
Include functions for addition, subtraction, multiplication, and 
division. Use the array to perform these operations on two integers
 and print the results.*/

 #include <stdio.h>
int operations(int a, int b, int opt) {
    if(opt==1)
    {
        return a + b;
    }
    if(opt==2)
    {
        return a * b;
    }
    if(opt==3)
    {
        return a - b;
    }
    if(opt==4)
    {
        return a / b;
    }
}


int main() {
    
    int x = 20;
    int y = 10;
    int opt;
    printf("select the opt between 1 to 4\n");
    scanf("%d",&opt);
    printf("%d",operations(x,y,opt));
    

    return 0;
}
