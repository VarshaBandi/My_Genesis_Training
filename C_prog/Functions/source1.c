#include<stdio.h>
#include"header1.h"

void positiveornegative(int n)
{
    if(n>0)
    {
        checkevenodd(n);
    }
    else
    {
        printf("\nIt looks like you entered wrong number\n");
        printf("Enter the number again: ");
        scanf("%d",&n);
        positiveornegative(n);
    }
}

void checkevenodd(int n)
{
    if(n%2==0)
    {
        printf("It is an even number");
    }
    else
    {
        printf("It is an odd number");
    }
}