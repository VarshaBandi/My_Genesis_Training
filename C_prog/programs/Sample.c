#include<stdio.h>

int main()
{
    int n,d,v=0;
    char a[50];
    printf("Enter a number: ");
    scanf("%d",&n);
    while(n!=0)
    {
        d=n%2;
        v=d+v*10;
        n=n/2;
    }
    printf("%d",v);
}