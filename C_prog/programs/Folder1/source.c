void checkpositive_negative(int num)
{
    if(num>0)
    {
        int status = checkprime(num);
        if(status==1)
        {
            printf("Prime");
        }
        else
        {
            printf("Not prime");
        }
    }
    else
    {
        printf("\n Reenter number");
        scanf("%d",&num);
        checkpositive_negative(num);
    }
}

void checkprime(int n)
{
    int i,flag=1;
    for(i=2;i<num;i++)
    {
        if(num%i==0)
        {
            flag=0;
            break;
        }
    }
    if(flag)
    {
        printf("prime");
    }
    else
    {
        printf("Not prime");
    }
}