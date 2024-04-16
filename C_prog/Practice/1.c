#include<stdio.h>

int main()
{
    int a[10],i,j,n,sum=0,mean;
    printf("Enter the range: ");
    scanf("%d",&n);
    printf("Enter the elements: \n");
    for(i=0;i<n;i++)
    {
        scanf("\n%d",&a[i]);
    }
    for(j=0;j<n;j++)
    {
        sum += a[j];
    }
    printf("sum is %d\n",sum);
    printf("Mean is %d\n",sum/n);
}
