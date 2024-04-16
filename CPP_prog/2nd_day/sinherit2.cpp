#include<iostream>
#include"inherit2.h"

void Mobile::switchon()
{
    std::cout<<"Mobile is switched on"<<"\n";
}
void Mobile::switchoff()
{
    std::cout<<"Mobile is switched off"<<"\n";
}


void WashingMachine::switchon()
{
    std::cout<<"Washing machine is switched on"<<"\n";
}
void WashingMachine::washcloth()
{
    std::cout<<"Washing machine is washing clothes"<<"\n";
}
void WashingMachine::switchoff()
{
    std::cout<<"Washing machine is switched off"<<"\n";
}

void TV::switchon()
{
    std::cout<<"TV is switched on"<<"\n";
}
void TV::switchoff()
{
    std::cout<<"TV is switched off"<<"\n";
}