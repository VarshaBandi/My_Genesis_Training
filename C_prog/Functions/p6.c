/*calculate sum of first 10 even numbers and
 sum of ten odd numbers using fun called calculate(...)
 display result in main
 */
#include<stdio.h>

int calculate(int *a, int *b)
{
    for(int i=1;i<10;i++)
    {
        if(i%2==0)
        {
            *a += i;
        }
        else
        {
            *b += i;
        }
    }

}

int main()
{
    int a=0,b=0;
    calculate(&a,&b);
    printf("%d %d",a,b);
}