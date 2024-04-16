#include<iostream>

class Calculator
{
    int a,b;
    public:
        Calculator(){std::cout<<"Base class constructor is called"<<"\n";}
        Calculator(int,int){}
        virtual void result(){}
        ~Calculator(){}
};

class sum:public Calculator
{
    public:
    sum();
    sum(int,int);
    ~sum(){}
    void result();
};

class dif:public Calculator
{
    public:
    dif();
    dif(int,int);
    ~dif(){}
    void result();
};

class mul:public Calculator
{
    public:
    mul();
    mul(int,int);
    ~mul(){}
    void result();
};

class divi:public Calculator
{
    public:
    divi();
    divi(int,int);
    ~divi(){}
    void result();
};