#include<stdio.h>
int main()
{
    int a = 10,b = 20,c;
    int* p;
    c = a + b;
    p = &c;
    printf("%d",*p);
}