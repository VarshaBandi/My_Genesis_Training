#include<iostream>
#include<algorithm>
#include<vector>

class Base
{
    public:
    virtual void display()
    {
        std::cout<<"Base"<<"\n";
    }
};

class Derived:public Base
{
    public:
    void display()
    {
        std::cout<<"Derived"<<"\n";
    }
};

int main()
{
    //std::vector<Base *> v = {new Derived(),new Base()};
    
    std::vector<Base *> v = {new Derived(),new Base()};
    v.push_back(new Base());
    v.push_back(new Derived());
    v.push_back(new Derived());
    for(Base *ptr : v)
        ptr->display();

    // Base b;
    // Derived d;
    // std::vector<Base> v = {b,d};
    // for(Base &el : v)
    //     el.display();
}