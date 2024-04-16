#include<stdio.h>

int main()
{
    int i,sum=0;
    for(i=1;i<=5;i++)
    {
        sum += i;
    }

    /*i=1;
    while(i<=5)
    {
        sum+=i;
        i++;
    }*/
    printf("%d",sum);
}