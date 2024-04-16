#include<iostream>
#include"mobile.h"
#include<cstring>

Mobile::Mobile()
{
    // strcpy(brand,"realme");
    // strcpy(model,"gt master");
    brand=new char[strlen("realme")+1];
    strcpy(brand,"realme");
    model=new char[strlen("8i")+1];
    strcpy(model,"8i");
    capacity=5000;
}

Mobile::Mobile(const char *b,const char *m,int c)
{
    // strcpy(this->brand,brand);
    // strcpy(this->model,model);
    brand=new char[strlen(brand)+1];
    model=new char[strlen(model)+1];
    strcpy(brand,b);
    strcpy(model,m);
    capacity=c;
}

Mobile::~Mobile()
{
    std::cout<<"\ncalled";
    delete brand;
    delete model;
}
void operator<<(std::ostream &s,Mobile &m)
{
    s<<m.brand;
    s<<m.model;
    s<<m.capacity;
}
void Mobile::accept()
{
    std::cout<<"enter brand:";
    std::cin>>brand;
    std::cout<<"enter model:";
    std::cin>>model;
    std::cout<<"enter capacity:";
    std::cin>>capacity;
}

void Mobile::display()
{
    std::cout<<"\nBrand:"<<brand<<" Model:"<<model<<" capacity:"<<capacity<<std::endl;
}
