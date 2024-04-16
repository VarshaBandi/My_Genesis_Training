#include<stdio.h>

int main()
{
    int a,b,i,j;
    printf("Enter range: ");
    scanf("%d %d",&a,&b);
    for(i=a;i<=b;i++)
    {
        int temp=0;
        for(j=2;j<=a/2;j++)
        {
            if(i%j==0)
            {
                temp=1;
                break;
            }
        }
        if(temp==0)
        {
            printf("%d\n",i);
        }
    }
}