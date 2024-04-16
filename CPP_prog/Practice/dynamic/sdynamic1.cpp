#include<iostream>
#include<cstring>
#include"dynamic1.h"

Bank::Bank()
{
    strcpy(name,"Varsha");
    balance = 1512;
}

int withdr(int b,int w)
{
    b = b - w;
    return b;
}

int creditt(int b,int w)
{
    b = b + w;
    return b;
}

int accbalance(int b)
{
    return b;
}
Bank::Bank(const char * n,double b)
{
    strcpy(name,n);
    balance = b;
}

void Bank::accept()
{
    int c,n1,n2,n3;
    std::cout<<"Enter your name: "<<"\n";
    std::cin>>name;
    std::cout<<"Enter balance: "<<"\n";
    std::cin>>balance;
    std::cout<<"\n";
    // std::cout<<"Enter your choice: 0 / 1"<<"\n";
    // std::cin>>c;
    // switch(c)
    // {
    //     case 0:
    //         std::cout<<"Enter withdrawal amount: "<<"\n";
    //         std::cin>>n1;
    //         balance = withdr(balance,n1);
    //         break;
    //     case 1:
    //         std::cout<<"Enter credit amount: "<<"\n";
    //         std::cin>>n2;
    //         balance = creditt(balance,n2);
    //         break;
    // }
}

void Bank::display()
{
    std::cout<<"Name: "<<name<<"\n";
    std::cout<<"Account Balance: "<<balance<<"\n";
    //std::cout<<"Amount withdrawed: "<<withdraw;
}