#include<stdio.h>

void fun(int *n)
{
    scanf("%d",n);
}

int main()
{
    int n;
    fun(&n);
    printf("%d",n);
}