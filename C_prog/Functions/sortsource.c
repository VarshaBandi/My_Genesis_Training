#include<stdio.h>
#include"sorthead.h"

void fun(a)
{
    int temp;
    for(int i=0;i<SIZE;i++)
    {
        for(int j=i+1;j<SIZE;j++)
        {
            if(a[i]>a[j])
            {
                temp = a[j]
                a[j] = a[i]
                a[i] = temp
            }
        }
    }

    for(i=0;i<SIZE;i++)
    {
        
    }
}