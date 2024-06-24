#include<stdio.h>

void selectionSort(int arr[], int n)
{
    int temp;
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(arr[i]>arr[j])
            {
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
    printf("sorted element are: ");
    for(int i=0;i<n;i++)
    {
        printf("%d",arr[i]);
    }
}

int main()
{
    int n;
    printf("enter thesize of array: ");
    scanf("%d",&n);
    int arr[n];
    printf("enter the element of an array: ");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }

    selectionSort(arr,n);

    return 0;
}