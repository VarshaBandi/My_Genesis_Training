#include<stdio.h>
void fun()
{
    static int a;
    a++;
    printf("%d\n ",a);
}

int main()
{
    int a=10;
    fun();
    fun();
    fun();
    printf("%d \n",a);
}