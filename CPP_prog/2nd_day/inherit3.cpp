#include<iostream>
#include"inherit3.h"

int main()
{
    int ch;
    std::cout<<"Enter your choice(1 for online / 2 for offline)"<<"\n";
    std::cin>>ch;

    Training *t = nullptr;

    if(ch==1)
    {
        t = new online();
    }
    else if(ch==2)
    {
        t = new offline();
    }
    else
    {
        std::cout<<"Invalid choice"<<"\n";
    }

    t->lectures();

    if(online *ol = dynamic_cast<online*>(t))
    {
        ol->recordings();
    }

    if(offline *of = dynamic_cast<offline*>(t))
    {
        of->oneonone();
    }
}