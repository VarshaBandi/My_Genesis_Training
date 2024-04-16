#include<iostream>

class ElectronicDevice
{
    public:
        ElectronicDevice(){std::cout<<"Base class default constructor is called"<<"\n";}
        ElectronicDevice(int,int){std::cout<<"Base class para constructor is called"<<"\n";}
        virtual void switchon(){std::cout<<"switch on"<<"\n";}
        virtual void switchoff(){std::cout<<"switch off"<<"\n";}
        ~ElectronicDevice() {}
};

class Mobile:public ElectronicDevice
{
    public:
        Mobile(){std::cout<<"Mobile default constructor is called"<<"\n";}
        Mobile(int,int){}
        ~Mobile(){}
        void switchon();
        void switchoff();
};

class WashingMachine:public ElectronicDevice
{
    public:
        WashingMachine(){std::cout<<"Washing machine default constructor is called"<<"\n";}
        WashingMachine(int,int){}
        ~WashingMachine(){}
        void switchon();
        void switchoff();
        void washcloth();
};

class TV:public ElectronicDevice
{
    public:
        TV(){std::cout<<"TV default constructor is called"<<"\n";}
        TV(int,int){}
        ~TV(){std::cout<<"TV destructor is called"<<"\n";}
        void switchon();
        void switchoff();
};