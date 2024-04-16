#include<stdio.h>

int main()
{
    int x = 10;
    int *p1 = &x;

    int a =10,b=20,c=30;
    int *p[3]={&a,&b,&c};
    for(int i=0;i<3;i++)
    {
        printf("%d\n",*p[i]);
    }
}