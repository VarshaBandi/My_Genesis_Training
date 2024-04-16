#include<stdio.h>

int main()
{
    int a[10][10],b[10][10],i,j,k,temp,n1,n2;
    printf("Enter the size of the matrix: ");
    scanf("%d %d",&n1,&n2);
    printf("Enter the matrix:\n");

    for(i=0;i<n1;i++)
    {
        for(j=0;j<n1;j++)
            scanf("%d",&a[i][j]);
    }

    for(i=0;i<n1;i++)
    {
        for(j=0;j<n2;j++)
        {
            for(k=j+1;k<n2;k++)
            {
                if(a[i][j]>a[k][j])
                {
                    temp = a[i][j];
                    a[i][j] = a[k][j];
                    a[k][j] = temp;
                }
            }
        }
    }

    for(i=0;i<n1;i++)
    {
        for(j=0;j<n1;j++)
            printf("%d ",a[i][j]);
        printf("\n");
    }

}