#include<stdio.h>

int main()
{
    int *p;
    int a = 10,c,d;
    p = &a;
    c = ++*p;
    d = (*p)++;
    printf("%d %d\n",*p,p);
    printf("%d %d",c,d);
}