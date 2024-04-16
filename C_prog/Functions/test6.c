#include<stdio.h>
#include<string.h>

int main()
{
    char str[10]="kpit";//str is a constant to non constant string
    int i=0;
    while(str[i]!='\0')
        i++;
    printf("\n Length=%d\n",i);

    //char *s="Pune";//s is a non constant pointer to constant string
    //s[0]='K';

    char *d = malloc(10*sizeof(char));//d is non constant pointer to non constant string
    printf("Enter string: ");
    gets(d);
    printf("%s\n",d);
    strcpy(d,"aaaa");
    printf("%s\n",d);

}