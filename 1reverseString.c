#include<stdio.h>
#include<string.h>

int main()
{
    char str[]="minkedln";
    int s=0;
    while(str[s]!='\0')
    {
        s++;
    }
    printf("len is %d\n",s);

    for(int i=s-1;i>=0;i--)
    {
        printf("%c",str[i]);
    }
    printf("\n");
    return 0;
}