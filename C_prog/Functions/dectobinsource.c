#include<stdio.h>
#include"dectobinhead.h"

void binprint(int n)
{
    int res = 0,rev = 0,d;
    while(n!=0)
    {
        d = n%2;
        res = res*10 + d;
        n = n/2;

    }
    while(res!=0)
    {
        d = res%10;
        rev = rev*10 + d;
        res = res/10;
    }
    printf("%d",rev);
}