#include<stdio.h>
#include"smarth.h"

void fun(int n)
{
    int a[10],high,sum=0,num =3,count=1;
    struct candidates;
    float avg[10];
    for(int i=0;i<3;i++)
    {
        int sum = 0;
        printf("Candidate %d\n",count);
        count++;
        for(int j=0;j<3;j++)
        {
            scanf("%d",&a[j]);
            sum += a[j];
        }
        avg[i] = sum/3;
        printf("Average is %.f\n",avg[i]);
        printf("-----------------------\n");
    }
    int cand;
    high = avg[0];
    for(int i=0;i<2;i++)
    {
      if(avg[i]>high)
      {
        high = avg[i];
        cand=i+1;
      }
    }
    printf("The selected player is candidate %d with an average score of %d\n",cand,high);
}