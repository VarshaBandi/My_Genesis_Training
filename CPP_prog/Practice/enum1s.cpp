#include<iostream>
#include<cstring>
#include"enum.h"

Col::Col()
{
    strcpy(name,"Varsha ");
    c=RED;
}

Col::Col(const char* d,enum COLOURS m)
{
    strcpy(name,d);
    c = m;
}

void Col::accept()
{
    int n;
    std::cout<<"Enter: ";
    std::cin>>name;
    std::cout<<"Enter colour: ";
    std::cin>>n;
    switch(n)
    {
        case 0:
            n = RED;
            break;
        case 1:
            n = BLUE;
            break;
        case 2:
            n = GREEN;
            break;
    }
            
}

void Col::display()
{
    std::cout<<"\n Name: ";
    std::cout<<name;
    std::cout<<"\n Colour: ";
    switch(c)
    {
        case 0:
            std::cout<<"RED";
            break;
        case 1:
            std::cout<<"BLUE";
            break;
        case 2:
            std::cout<<"GREEN";
            break;
    }
}