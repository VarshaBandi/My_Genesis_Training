#include<stdio.h>

void show(int *k, int *t)
{
    ++*k;
    ++*t;
}

int main()
{
    int a = 10, b =20;
    show(&a,&b);
    printf("%d %d\n",a,b);
}