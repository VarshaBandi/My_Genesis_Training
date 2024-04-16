int main()
{
    int count,i;
    int a[5]={4,5,9,4,9};
    int b[5]={0};
    for(i=0;i<5;i++)
    {
       // count = 1;
        for(int j=i+1;j<5;j++)
        {
            count = 1;
            if(a[i]==a[j])
            {
                count +=1;
                b[j]=-1;
            }
            if(b[i]!=-1)
            {
                b[i]=count;
            }
        }
    }
    for(i=0;i<5;i++)
    {
        if(b[i]!=-1)
        {
            printf("%d count is %d\n",a[i],b[i]);
        }
    }
}