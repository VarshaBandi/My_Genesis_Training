#include<stdio.h>

int main()
{
    int a[5]={2,14,1,2,14},b[10]={0},i,j;
    int count;
    for(i=0;i<5;i++)
    {
        count=1;
        for(j=i+1;j<5;j++)
        {
            if(a[i]==a[j])
            {
                count++;
                b[j]=-1;
            }
        }
        if(b[i]!=-1)
            b[i]=count;
    }
    
    for(i=0;i<5;i++)
    {
        if(b[i]!=-1)
            printf("%d repeated %d times\n",a[i],b[i]);
    }
    return 0;
}