#include<stdio.h>

int main()
{
    char arr[7]="kpit";
    printf("%s",arr);
    char *p = arr;
    printf("\n%c",++*p);
    printf("\n str = %s\n",arr);
}