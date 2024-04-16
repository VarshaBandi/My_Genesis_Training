#include<stdio.h>
#include"fibohead.h"

int main()
{
    int n;
    int a = 0, b = 1;
    printf("Enter the range: ");
    scanf("%d",&n);
    fiborange(n,a,b);
}