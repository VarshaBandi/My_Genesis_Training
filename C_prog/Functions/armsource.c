#include<stdio.h>

#include"armhead.h"

int power(int a,int b){ // a*a*......b times
    int c=1;
    for(int i=0;i<b;i++) c*=a;//  2*4   ->  2* 2* 2*2  -> 
    return c;
}
int armcount(int i)
{
    int count=0,temp=i;
    while(i>0)
    {
        count+=1;
        i = i/10;
        //printf("%d",count);
    }
   // printf("%d",count);
    return count;
}
int printrange(int a, int b)
{
    int res;
    for(int i=a;i<b;i++)
    {
        checkarmstrong(i,armcount(i));

    }
    
}

void checkarmstrong(int temp,int count)
{
    int res=0,d;
    int f = temp;
    while(temp!=0)
    {
        d = temp%10;
        res += power(d,count);
        temp = temp/10;
    }
    if(res==f)
    {
        printf("%d\n",res);
    }

}