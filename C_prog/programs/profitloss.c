#include<stdio.h>

int main()
{
    int cost = 1000,selling_price;
    scanf("%d",&selling_price);
    if(cost>selling_price)
    {
        printf("loss");
    }
    else{
        printf("profit");
    }
}