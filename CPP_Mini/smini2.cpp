#include<iostream>
#include<cstring>
#include"Mini2.h"

Loan::Loan()
{
    strcpy(Name,"Varsha");
    Loannumber=12345;
    Amount = 120000;
    Interestamount = 13000;
}

Loan::Loan(float f)
{
    Amount = f;
}

void Loan::accept()
{
    std::cout<<"Enter Name:"<<"\n";
    std::cin>>Name;
    std::cout<<"Enter Loan number:"<<"\n";
    std::cin>>Loannumber;
    std::cout<<"Enter Amount:"<<"\n";
    std::cin>>Amount;
    std::cout<<"Enter Interest amount:"<<"\n";
    std::cin>>Interestamount;
}

void Loan::display()
{
    std::cout<<"Name: "<<Name<<"\n";
    std::cout<<"Loan number: "<<Loannumber<<"\n";
    std::cout<<"Amount: "<<Amount<<"\n";
    std::cout<<"Interest amount: "<<Interestamount<<"\n";
}

void operator>>(std::istream &is, Loan &ln)
{
    std::cout<<"Enter name: ";
    is>>ln.Name;
    std::cout<<"Enter loannumber: ";
    is>>ln.Loannumber;
    std::cout<<"Enter amount: ";
    is>>ln.Amount;
    std::cout<<"Enter interestamount: ";
    is>>ln.Interestamount;
}

void operator<<(std::ostream &os, Loan &ln)
{

    os<<"name: "<<ln.Name;
    os<<"loan number: "<<ln.Loannumber;
    os<<"loan amount: "<<ln.Amount;
    os<<"interest amount: "<<ln.Interestamount;
}