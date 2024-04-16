#include<iostream>
#include<cstring>
#include"containment.h"

contain1::contain1()
{
    id = 1;
    std::cout<<"ID: "<<id<<"\n";
    std::cout<<"Name: Varsha"<<"\n";
}

contain1::contain1(int i,const char* n)//:id(i)
{
    id = i;
    std::cout<<"ID: "<<id<<"\n";
    name = new char[strlen(n)+1];
    strcpy(name,n);
    std::cout<<"Name: "<<name<<"\n";
}
void operator<<(std::ostream &os,contain1 &c1)
{
    os<<c1.id<<"\n";
    os<<c1.name<<"\n";
}

contain2::contain2()
{
    std::cout<<"Age: 21"<<"\n";
}

contain2::contain2(int a,contain1 c):age(a),cont(c)
{
    //std::cout<<"ID: "<<c<<"\n";
    std::cout<<"Age: "<<a<<"\n";
    //std::cout<<"Para const"<<"\n";
}

void operator<<(std::ostream &os,contain2 &c1)
{
    os<<"-----------"<<"\n"<<c1.age<<"\n";
    os<<c1.cont;
}