#include<iostream>

class contain1
{
    int id;
    char *name;
    public:
        // int id;
        // char *name;
        contain1();
        contain1(int,const char*);
        ~contain1(){std::cout<<"Contain1 destructor is called"<<"\n";}
        friend void operator<<(std::ostream &os,contain1 &c1);
};

class contain2
{
    int age;
    public:
        //int age;
        contain1 cont;
        contain2();
        contain2(int,contain1);
        ~contain2(){std::cout<<"Contain2 destructor is called"<<"\n";}
        friend void operator<<(std::ostream &os,contain2 &c2);
};