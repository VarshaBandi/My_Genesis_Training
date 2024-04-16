#include<iostream>
#include<cstring>
#include"Mini3.h"

void operator==()
{
    flag=0;
    if(p1==p2)
    {
        flag = 1;
    }
    return flag;
}

char& operator[](int index)
{
    return p[index];
}

void operator<()
{
    if(x<y)
    {
        std::cout<<a<<" less than "<<b;
    }
    else
    {
        std::cout<<b<<" less than "<<a;
    }
}

int main()
{
    int n;
    char* p1;
    char* p2;
    std::cout<<"Enter n: ";
    std::cin>>n;
    Player *p = new Player[n];
    for(int i=0;i<n;i++)
    {
        p[i].accept();
    }
    for(int i=0;i<n;i++)
    {
        p[i].display();
    }
    strcpy(p1,p[0].getname());
    strcpy(p2,p[1].getname());


    bool p1==p2;
    if(flag=0)
    {
        std::cout<<"Not equal";
    }
    else
    {
        std::cout<<"equal";
    }

    Player p(p1);
    char c = p[0];
    std::cout<<c;

    bool p1<p2;

    Player t;
    std::cout<<t;


}