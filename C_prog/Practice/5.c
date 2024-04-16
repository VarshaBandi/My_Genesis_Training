#include<stdio.h>

int main()
{
    int arr[20],n1,n2,n,d,i,j,count;
    printf("Enter the size of array: ");
    scanf("%d",&n);
    count=0;
    printf("Enter %d elements:\n",n);

    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }

    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(arr[i]==arr[j])
            {
                n--;
                for(int k=j;k<n;k++)
                {
                    arr[k]=arr[k+1];
                }
                j--;
            }
        }
    }

    for(int i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
}