#include<iostream>

enum Car{
    SUV,HatchBack,Sedan
};
enum Bike{
    Commute,Sports,Offroader
};

class vehicle
{
    int chassisnumber;
    char brand[20];
    int showprice;
    int tax;
    int insuranceamount;
    public:
        vehicle();
        vehicle(int,const char,int,int,int);
        ~vehicle();
        virtual void accept();

        int getChassisnumber() const { return chassisnumber; }
        void setChassisnumber(int chassisnumber_) { chassisnumber = chassisnumber_; }

        int getShowprice() const { return showprice; }
        void setShowprice(int showprice_) { showprice = showprice_; }

        int getTax() const { return tax; }
        void setTax(int tax_) { tax = tax_; }

        int getInsuranceamount() const { return insuranceamount; }
        void setInsuranceamount(int insuranceamount_) { insuranceamount = insuranceamount_; }

      

     

};

class car:public vehicle
{
      enum Car c;
  
  
    public:
      enum Car getC() const { return c; }
        void setC(const enum Car &c_) { c = c_; }
        car();
        car(enum Car);
        ~car(){}
};

class bike:public vehicle
{
      enum Bike b;
    public:
       enum Bike getB() const { return b; }
        void setB(const enum Bike &b_) { b = b_; }
        bike();
        bike(enum Bike);
        ~bike(){}
};