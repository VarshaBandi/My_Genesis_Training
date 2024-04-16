#include<stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
    if(n>0)
    {
        printf("+ve number");
    }
    else if(n<0)
    {
        printf("-ve number");
    }
    else
    {
        printf("Neither +ve nor -ve number");
    }
}