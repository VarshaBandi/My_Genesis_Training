#include<stdio.h>

int main()
{
    int arr[20],n1,n2,n,d;
    printf("Enter the size of array: ");
    scanf("%d",&n);
    printf("Enter %d elements:\n",n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }/*
    printf("Enter the number: ");
    scanf("%d",&n1);
    printf("Enter the position at which you want to insert: ");
    scanf("%d",&n2);
    for(int i=0;i<n;i++)
    {
        if(i==n2)
        {
            arr[i]=n1;
        }
        printf("%d\n",arr[i]);
    }*/
    printf("Enter the element to delete: ");
    scanf("%d",&d);
    for(int i=0;i<n;i++)
    {
        if(arr[i]==d)
        {
            for(int j=i;j<n;j++)
            {
                arr[j]=arr[j+1];
            }
        }
    }
    for(int i=0;i<n-1;i++)
    {
        printf("%d ",arr[i]);
    }
}