#include<iostream>
#include<algorithm>
#include<vector>

class Base
{
    public:
    void print()
    {
        std::cout<<"Base print"<<"\n";
    }
    virtual void display()
    {
        std::cout<<"Base display"<<"\n";
    }
};

class Derived:public Base
{
    public:
    void print()
    {
        std::cout<<"Derived print"<<"\n";
    }
    void display()
    {
        std::cout<<"Derived display"<<"\n";
    }
};

int main()
{
    Base b;
    Derived d;
    b.print();
    b.display();

    d.print();
    d.display();
}