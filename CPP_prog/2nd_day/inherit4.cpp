#include<iostream>
#include"inherit4.h"

int main()
{
    int ch;
    std::cout<<"Enter your choice(1 for engineering / 2 for medical)"<<"\n";
    std::cin>>ch;

    Student *t = nullptr;

    if(ch==1)
    {
        t = new Engineering();
    }
    else if(ch==2)
    {
        t = new Medical();
    }
    else
    {
        std::cout<<"Invalid choice"<<"\n";
    }

    t->labs();

    if(Engineering *ol = dynamic_cast<Engineering*>(t))
    {
        ol->design();
    }

    if(Medical *of = dynamic_cast<Medical*>(t))
    {
        of->treatment();
    }
}