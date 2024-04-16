#include<stdio.h>

int main()
{
    int a[4]={3,12,1,20},i;
    int min = a[0];
    int max = a[0];
    for(i=0;i<4;i++)
    {
        if(min>a[i])
        {
            min = a[i];
        }
        if(max<a[i])
        {
            max=a[i];
        }
    }
    printf("Min: %d\n Max: %d",min,max);
}