#include<stdio.h>

int main()
{
    int a[10],n,i;
    int even=0,odd=0,zero=0;
    printf("Enter the range of array: ");
    scanf("%d",&n);
    printf("Enter the elements:\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        if(a[i]==0)
        {
            zero++;
        }
        else if(a[i]%2==0)
        {
            even++;
        }
        else
        {
            odd++;
        }
    }
    printf("Even: %d, Odd: %d, Zero: %d",even,odd,zero);
}