#include<stdio.h>

int main()
{
    int a[20],n,min,max,i,j,n1,temp;
    printf("Enter the size of array: ");
    scanf("%d",&n);
    printf("Enter %d elements:\n",n);

    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }

    printf("Enter the position at which you want to find the max:");
    scanf("%d",&n1);

    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[i]>a[j])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    printf("%d",a[n-n1]);
}
