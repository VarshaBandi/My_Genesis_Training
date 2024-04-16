#include<stdio.h>
#include"4.h"

void fun(int n1,int n2)
{
    int a[10]={0},n,d,s,max,m;
    for(int i=n1;i<=n2;i++)
    {
        n = i;
        while(n!=0)
        {
            d = n%10;
            a[d]++;
            n = n/10;
        }
    }
    s = sizeof(a)/sizeof(a[0]);
    
    int fun2()
    {
        for(int j=0;j<s;j++)
        {
            for(int i=j+1;i<s;i++)
            {
                if(a[j]>a[i])
                {
                    max = j;
                    return max;
                }
            }
        }
    }

    m = fun2();
    printf("%d",m);
}