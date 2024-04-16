#include<iostream>
#include"inherit5.h"

sum::sum()
{
    std::cout<<"Sum constructor is called"<<"\n";
}
sum::sum(int a,int b)
{
    std::cout<<"Sum is "<<a+b<<"\n";
}
void sum::result()
{
    std::cout<<"Sum is printed"<<"\n";
}

dif::dif()
{
    std::cout<<"dif constructor is called"<<"\n";
}
dif::dif(int a,int b)
{
    std::cout<<"difference is "<<a-b<<"\n";
}
void dif::result()
{
    std::cout<<"Difference is printed"<<"\n";
}

mul::mul()
{
    std::cout<<"Mul constructor is called"<<"\n";
}
mul::mul(int a,int b)
{
    std::cout<<"Multiplication is "<<a*b<<"\n";
}
void mul::result()
{
    std::cout<<"Multiplication is printed"<<"\n";
}

divi::divi()
{
    std::cout<<"div constructor is called"<<"\n";
}
divi::divi(int a,int b)
{
    std::cout<<"Division is "<<a/b<<"\n";
}
void divi::result()
{
    std::cout<<"Division is printed"<<"\n";
}
