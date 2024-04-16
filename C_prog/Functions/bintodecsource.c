#include<stdio.h>
#include"bintodechead.h"

void bintodec(int n)
{
    int b = 1,d,re=0;
    while(n!=0)
    {
        d = n%10;
        re += d*b;
        b = b*2;
        n = n/10;
    }
    printf("%d",re);
}