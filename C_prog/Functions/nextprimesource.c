#include<stdio.h>
#include"nextprimehead.h"

void checkposneg(int n)
{
    if(n>0)
    {
        nextprime(n);
    }
    else{
        printf("You entered wrong number\n");
        printf("Enter the number again: ");
        scanf("%d",&n);
        checkposneg(n);
    }
}

void nextprime(int n)
{
    for(int i=n+1;i>0;i++)
    {
        int flag=0;
        for(int j=2;j<=i/2;j++)
        {
            if(i%j==0)
            {
                flag=1;
                break;
            }
        }
        if(flag==0)
        {
            printf("%d",i);
            break;
        }
    }
}