#include<stdio.h>

int main()
{
    int n,d,rev=0;
    scanf("%d",&n);
    while(n!=0)
    {
        d = n%10;
        rev = d + rev*10;
        n = n/10;
    }
    printf("Reverse of the number is : %d\n",rev);
}