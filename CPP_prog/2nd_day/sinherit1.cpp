#include<iostream>
#include<cstring>
#include"inherit1.h"

Vehicle::Vehicle()
{
    vehnum = 2301;
    vehname = new char[strlen("Activa 5g")+1];
    strcpy(vehname,"Activa 5g");
    std::cout<<"Vehicle name: "<<vehname<<", Vehicle number: "<<vehnum<<"\n";
}

Vehicle::Vehicle(int v,const char* c)
{
    vehnum = v;
    strcpy(vehname,c);
}

void operator<<(std::ostream &os, Vehicle &v)
{
    os<<v.vehname<<"\n";
    os<<v.vehnum<<"\n";
}

TwoWheeler::TwoWheeler()
{
    std::cout<<"Two Wheeler default constructor is called"<<"\n";
}

TwoWheeler::TwoWheeler(int v,const char* c,Vehicle ve):
    vh(ve)
{
    std::cout<<"Two Wheeler parameterised constructor is called"<<"\n";
}

void TwoWheeler::drive()
{
    std::cout<<"Two wheeler is being driven"<<"\n";
}

void operator<<(std::ostream &os,TwoWheeler &vl)
{
    os<<vl.vh;
    // os<<vl.vehname;
    // os<<vl.vehnum;
}

FourWheeler::FourWheeler()
{
    std::cout<<"Four Wheeler default constructor is called"<<"\n";
}

FourWheeler::FourWheeler(int vehnum,const char* vehname):
    Vehicle(vehnum,vehname)
{
    std::cout<<"Four Wheeler parameterised constructor is called"<<"\n";
}

void FourWheeler::drive()
{
    std::cout<<"Four wheeler is being driven"<<"\n";
}

void FourWheeler::AC()
{
    std::cout<<"Four Wheeler AC is on"<<"\n";
}