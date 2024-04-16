#include<stdio.h>

int fun1(int dif)
{
    int count=1;
    for(int i=2;i<=dif/2;i++)
    {
        if(dif%i==0)
        count++;
    }
    if(count==1)
    return dif;
    else
    fun1(++dif);
}
int fun2(int dif)
{
    int count=1;
    for(int i=2;i<=dif/2;i++)
    {
        if(dif%i==0)
        count++;
    }
    if(count==1)
    return dif;
    else
    fun2(--dif);
}
int maxmin(int a[],int n)
{
    int min,max,i,sqmin,sqmax,dif;
    min=a[0];
    max=a[0];

    for(i=1;i<n;i++)
    {
        if(max<a[i])
        max=a[i];
        if(min>a[i])
        min=a[i];
    }
    sqmin = min*min;
    sqmax = max*max;
    printf("%d %d\n",sqmin,sqmax);
    dif = sqmax-sqmin;
    return dif;
}
int main()
{
    int a[10],i,res,n,a1,b,c,d;
    printf("Enter the size: ");
    scanf("%d",&n);
    printf("Enter %d elements: ",n);

    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    res = maxmin(a,n);
    printf("%d\n",res);
    a1 = fun1(++res);
    b = fun2(--res);
    c = a1-res;
    d = res-b;
    if(c<d)
    {
        printf("%d",a1);
    }
    else if(d<c)
    {
        printf("%d",b);
    }
    else
    {
        printf("%d %d",a1,b);
    }

}