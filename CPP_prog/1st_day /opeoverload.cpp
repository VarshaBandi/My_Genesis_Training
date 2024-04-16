#include<iostream>
#include"opeoverload.h"
#include<cstring>

int main()
{
    int flag=0;
    int n1[3] = {10,20,30};
    int n2[3] = {30,40,50};
    oper p1(28,"Bandi",n1);
    oper p2(25,"Uday",n2);
    bool f = p1<p2;
    if(flag==0)
        std::cout<<"p1 is less than p2"<<"\n";
    else
        std::cout<<"p2 is less than p1"<<"\n";


    bool f1 = p1==p2;
    if(flag)
        std::cout<<"Equal"<<"\n";
    else
        std::cout<<"Not equal"<<"\n";

    //oper p("Varshaaa");
    char c = p1[3];
    std::cout<<c<<"\n";
    p1[3]='r';
    std::cout<<p2.getname()<<"\n";

    oper o;
    std::cout<<o;
}