#include<stdio.h>
#include"arrayhead.h"

void Sorteven(int b[],int count1)
{
    int temp;
    for(int i=0;i<count1;i++)
    {
        for(int j=i+1;j<count1;j++)
        {
            if(b[i]>b[j])
            {
                temp = b[i];
                b[i] = b[j];
                b[j] = temp;
            }
        }
    }
    for(int i=0;i<count1;i++)
    printf("%d ",b[i]);
}

void Sortodd(int c[],int count2)
{
    int temp;
    for(int i=0;i<count2;i++)
    {
        for(int j=i+1;j<count2;j++)
        {
            if(c[i]<c[j])
            {
                temp = c[i];
                c[i] = c[j];
                c[j] = temp;
            }
        }
    }
    for(int i=0;i<count2;i++)
    printf("%d ",c[i]);
}
void ArraySorting(int arr[],int n)
{
    int b[50]={0},c[50]={0},n1,n2,count1=0,count2=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]%2==0)
        {
            count1++;
            for(int j=0;j<count1;j++)
            {
                if(b[j]==0)
                b[j]=arr[i];
                else
                continue;
            }
        }
        else
        {
            count2++;
            for(int j=0;j<count2;j++)
            {
                if(c[j]==0)
                c[j]=arr[i];
                else
                continue;
            }
        }

    }
    Sorteven(b,count1);
    Sortodd(c,count2);
}
