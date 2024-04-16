#include<stdio.h>
#define SIZE 5
void f1(int[]);
int main()
{
    int a[SIZE]={7,8,55,7,70};
    f1(a);
}

void fun(in)
void f1(int *c)
{
    for(int i=0;i<SIZE;i++)
    {
        printf("%d",*(c+i));
    }
}