#include<stdio.h>

int main()
{
    int a[3][3],b[3][3],c[3][3],i,j,n1,n2,sum;
    printf("Enter the size of the matrix: ");
    scanf("%d %d",&n1,&n2);
    printf("Enter the first matrix:\n");
    for(i=0;i<n1;i++)
    {
        for(j=0;j<n1;j++)
            scanf("%d",&a[i][j]);
    }
    printf("Enter the second matrix:\n");
    for(i=0;i<n2;i++)
    {
        for(j=0;j<n2;j++)
            scanf("%d",&b[i][j]);
    }
    for(i=0;i<n1;i++)
    {
        for(j=0;j<n2;j++)
        {
            c[i][j]=0;
            for(int k=0;k<n2;k++)
            {
                c[i][j] += a[i][k]*b[k][j];
            }
        }
    }

    for(i=0;i<n1;i++)
    {
        for(j=0;j<n2;j++)
        {
            printf("%d ",c[i][j]);
        }
        printf("\n");
    }
}