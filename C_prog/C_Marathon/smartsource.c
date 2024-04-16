#include<stdio.h>
#include"smarthead.h"


void Candidates(int n)
{
    int a[10],high,sum=0,num =3,count=1;
    float avg[10];
    for(int i=0;i<n;i++)
    {
        int sum = 0;
        printf("Candidate %d\n",count);
        count++;
        for(int j=0;j<num;j++)
        {
            scanf("%d",&a[j]);
            sum += a[j];
        }
        avg[i] = sum/3;
        printf("Average is %.f\n",avg[i]);
        printf("-----------------------\n");
        //printf("%d",)
    }
    int cand;
    high = avg[0];
    for(int i=0;i<n;i++)
    {
      if(avg[i]>high)
      {
        high = avg[i];
        cand=i+1;
      }
    }
    printf("The selected player is candidate %d with an average score of %d\n",cand,high);
}