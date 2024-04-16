#ifndef LAPTOP_H
#define LAPTOP_H

#include<iostream>
#include<cstring>

class Laptop
{
    private:
        double price;
        std::string model;
        int storage;
        bool isPoweredOn;
        int batteryPercentage;

    public:
        Laptop(double price,std::string model,int storage);
        void powerOn();
        void powerOff();
        void connectToWifi();
        void checkBatteryStatus();
        void display();

};

#endif // LAPTOP_H
