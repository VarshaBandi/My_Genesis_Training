#include<stdio.h>

int main()
{
    int a[10][10],b[10][10],i,j,n1,n2;
    printf("Enter the size of the matrix: ");
    scanf("%d %d",&n1,&n2);
    printf("Enter the matrix:\n");

    for(i=0;i<n1;i++)
    {
        for(j=0;j<n1;j++)
            scanf("%d",&a[i][j]);
    }

    for(i=0;i<n2;i++)
    {
        for(j=0;j<n2;j++)
        {
            b[j][i]=a[i][j];
        }
    }

    for(i=0;i<n2;i++)
    {
        for(j=0;j<n2;j++)
        {
            printf("%d ",b[i][j]);
        }
        printf("\n");
    }
}