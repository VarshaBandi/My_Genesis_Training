#include<iostream>

class Vehicle
{
    private:
    int vehnum;
    char *vehname;

    public:
    Vehicle();
    Vehicle(int,const char*);
    virtual void drive() {std::cout<<"Vehicle is called"<<"\n";}
    virtual ~Vehicle() { std::cout<<"Vehicle destructor is called"<<"\n";}
    friend void operator<<(std::ostream &os, Vehicle &v);

};

class TwoWheeler: public Vehicle
{
    public:
        Vehicle vh;
        TwoWheeler();
        TwoWheeler(int,const char*,Vehicle);
        ~TwoWheeler(){std::cout<<"Two wheeler destructor is called"<<"\n";}
        void drive();
        friend void operator<<(std::ostream &os, TwoWheeler &t);
};

class FourWheeler: public Vehicle
{
    public:
        FourWheeler();
        FourWheeler(int,const char*);
        ~FourWheeler(){std::cout<<"Four wheeler destructor is called"<<"\n";}
        void drive();
        void AC();
};
