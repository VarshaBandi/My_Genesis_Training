#include<stdio.h>

int main()
{
    int n,i,a=0,b=1,c;
    printf("Enter a range: ");
    scanf("%d",&n);
    printf("%d\n%d\n",a,b);
    for(i=3;i<=n;i++)
    {
        c=a+b;
        printf("%d\n",c);
        a=b;
        b=c;
    }
}