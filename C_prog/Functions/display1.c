#include<stdio.h>
#include<stdlib.h>

void accept(int[],int n);
void display(int[],int n);

int main()
{
    int n;
    printf("\nHow many elements: ");
    scanf("%d",&n);
    int *ptr = (int*)malloc(n*sizeof(int));
    accept(ptr,n);
    display(ptr,n);
    free(ptr);
}

void accept(int b[],int n)
{
    for(int i=0;i<n;i++)
    {
        printf("Enter element:");
        scanf("\n%d",&b[i]);
    }
}

void display(int b[],int n)
{
    for(int j=0;j<n;j++)
    {
        printf("\n%d",b[j]);
    }
}