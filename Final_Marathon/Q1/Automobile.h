#ifndef AUTOMOBILE_H
#define AUTOMOBILE_H

#include"PrivilegeCategory.h"
#include"Category.h"
#include<string>
#include <ostream>

class Automobile
{
private:
    std::string _id;
    std::string _brand;
    PrivilegeCategory _privilegecategory;
    Category _mycategory;
    float _price;
    std::string _model;
public:
    Automobile()=delete;
    Automobile(const Automobile&)=delete;
    Automobile(Automobile&&)=delete;
    Automobile& operator=(const Automobile&)=delete;
    Automobile& operator=(Automobile&&)=delete;
     ~Automobile()=default;

    Automobile(std::string id,std::string brand,PrivilegeCategory privilegecategory,Category mycategory,float price,std::string model);

    std::string id() const { return _id; }
    std::string brand() const { return _brand; }
    PrivilegeCategory category() const { return _privilegecategory; }
    float price() const { return _price; }
    std::string model() const { return _model; }


    PrivilegeCategory FindPrivilegeType();
    float GreenPassCost();

    Category mycategory() const { return _mycategory; }

    friend std::ostream &operator<<(std::ostream &os, const Automobile &rhs);
};

#endif // AUTOMOBILE_H
