#include<iostream>
#include"inherit2.h"

int main()
{
    // ElectronicDevice ed;
    // ed.switchoff();
    // ed.switchon();

    int ch;
    std::cout<<"Enter your choice:"<<"\n"<<"1) Mobile"<<"\n"<<"2) Washing Machine"<<"\n"<<"3) TV"<<"\n";
    std::cin>>ch;

    ElectronicDevice *e = nullptr;

    if(ch==1)
    {
        e = new Mobile();
    }
    else if(ch==2)
    {
        e = new WashingMachine();
    }
    else if(ch==3)
    {
        e = new TV();
    }
    else
    {
        std::cout<<"Invalid choice"<<"\n";
    }

    e->switchon();

    if(WashingMachine *w = dynamic_cast<WashingMachine*>(e))
    {
        w->washcloth();
    }

    e->switchoff();

    delete e;
}