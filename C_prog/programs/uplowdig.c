#include<stdio.h>

int main()
{
    char n;
    scanf("%c",&n);
    if(n>='a' && n<='z')
    {
        n = n-'a'+'A';
        printf("%c",n);
    }
    else if(n>='A' && n<='Z')
    {
        n = n-'A'+'a';
        printf("%c",n);
    }
    else{
        printf("%d",n);
    }
}