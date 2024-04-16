#include<stdio.h>
#include"arrayhead.h"

int main()
{
    int arr[50],n;
    printf("Enter the size of array: ");
    scanf("%d",&n);
    printf("Enter the array: ");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
        if(arr[i]<=0)
        {
            printf("Array elements must be positive\n");
            printf("Enter a number again: ");
            scanf("%d",&arr[i]);
        }
    }
    ArraySorting(arr,n);
}