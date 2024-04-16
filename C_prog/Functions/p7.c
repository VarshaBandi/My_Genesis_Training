#include<stdio.h>

int power(int *a,int *b,int *res)
{
    for(int i=1;i<=*b;i++)
    {
        *res *= *a;
    }
}

int main()
{
    int a=2,b=3,res=1;
    power(&a,&b,&res);
    printf("%d",res);
}