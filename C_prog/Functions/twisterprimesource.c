#include<stdio.h>
#include"twisterprimehead.h"

void checktwist(int n)
{
    int d,rev=0;
    while(n>0)
    {
        d = n%10;
        rev = rev*10 + d;
        n = n/10;
    }
    int flag=0;
    for(int i=2;i<=rev/2;i++)
    {
        if(rev%i==0)
        {
            flag=1;
            break;
        }
    }
    if(flag==0)
    {
        printf("It is a twisted prime\n");
    }
    else{
        printf("It is not a twisted prime\n");
    }

}