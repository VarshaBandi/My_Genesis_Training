#include<iostream>
#include<cstring>
#include"vehicle.h"

vehicle::vehicle()
{
    chassisnumber=789;
    strcpy(brand,"Activa");
    showprice = 32000;
    tax=500;
    insuranceamount=1000;
}

vehicle::vehicle(int i,const char c,int d,int e,int f):
    chassisnumber(i),showprice(d),tax(e),insuranceamount(f)
{
    strcpy(brand,"Activa");
}

vehicle::~vehicle()
{
    std::cout<<"Destructor is called"<<"\n";
}

void vehicle::accept()
{
    std::cout<<"enter chassis number: ";
    std::cin>>chassisnumber;
    std::cout<<"enter the brand: ";
    std::cin>>brand;
    std::cout<<"enter ex-showroom price: ";
    std::cin>>showprice;
    std::cout<<"enter tax: ";
    std::cin>>tax;
    std::cout<<"enter insurance amount: ";
    std::cin>>insuranceamount;
}

car::car()
{
    std::cout<<"Default"<<"\n";
}

car::car(enum Car c)
{
    std::cout<<"Parameterized"<<"\n";
}

bike::bike()
{
    std::cout<<""<<"\n";
}

bike::bike(enum Bike b)
{
    std::cout<<"Parameterized"<<"\n";
}

