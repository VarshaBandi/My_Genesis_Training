#include<iostream>
#include"laptop.h"

Laptop::Laptop(double price,std::string model, int storage)
    : price(price),model(model),storage(storage),isPoweredOn(false),batteryPercentage(100){}

void Laptop::powerOn()
{
    isPoweredOn = true;
    std::cout<<"Laptop is now powered on"<<"\n";
}

void Laptop::powerOff()
{
    isPoweredOn = false;
    std::cout<<"Laptop is now powered off"<<"\n";
}

void Laptop::connectToWifi()
{
    if(isPoweredOn)
    {
        std::cout<<"Connected to wifi"<<"\n";
    }
    else
    {
        std::cout<<"Power on the laptop first to connect to wifi"<<"\n";
    }
}

void Laptop::checkBatteryStatus()
{
    std::cout<<"Battery status: "<<batteryPercentage<<"%"<<"\n";
}

void Laptop::display()
{
    std::cout<<"Laptop Model: "<<model<<", Storage: "<<storage<<"GB, Price: "<<price<<"$"<<"\n";
}
