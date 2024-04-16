#include<iostream>
#include"inherit5.h"

int main()
{
    int ch;
    std::cout<<"Enter your choice:"<<"\n";
    std::cout<<"1) Addition"<<"\n";
    std::cout<<"2) Subtraction"<<"\n";
    std::cout<<"3) Multiplication"<<"\n";
    std::cout<<"4) Division"<<"\n";
    std::cin>>ch;

    Calculator *c = nullptr;

    if(ch==1)
    {
        c = new sum(9,3);
    }
    else if(ch==2)
    {
        c = new dif(7,1);
    }
    else if(ch==3)
    {
        c = new mul(2,6);
    }
    else if(ch==4)
    {
        c = new divi(10,5);
    }
    else
    {
        std::cout<<"Invalid choice"<<"\n";
    }

    c->result();


}