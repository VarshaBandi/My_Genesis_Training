#include<stdio.h>
#include"playhead.h"

void genNumSeq(int n)
{
    int m;
    if(n>0 && n<=30)
    {
        int num = 3;
        for(int i=0;i<n;i++)
        {
            printf("%d ",num);
            num = num*2 -1;
        }
    }
    else
    {
        printf("You entered the wrong number\n");
        printf("Enter a number again: ");
        scanf("%d",&m);
        genNumSeq(m);
    }
}