#include<stdio.h>
#include"fibohead.h"

void fiborange(int n,int a,int b)
{
    if(n==1)
    {
        printf("%d\n",a);
    }else if(n==2)
    {
        printf("%d\n%d\n",a,b);
    }else
    {
        printf("%d\n%d\n",a,b);
        fiboprint(n,a,b);
    }
}

void fiboprint(int n,int a,int b)
{
    int c;
    for(int i=3;i<=n;i++)
    {
       c = a + b;
       printf("%d\n",c);
       a = b;
       b = c;
    }
}