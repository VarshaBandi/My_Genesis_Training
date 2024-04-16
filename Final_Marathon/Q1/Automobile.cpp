#include "Automobile.h"

Automobile::Automobile(std::string id, std::string brand, PrivilegeCategory privilegecategory,Category mycategory ,float price, std::string model)
    :_id(id),_brand(brand),_privilegecategory(privilegecategory),_mycategory(mycategory),_price(price),_model(model)
{
}

PrivilegeCategory Automobile::FindPrivilegeType()
{
    PrivilegeCategory pc;
    if((Category::PRIVATE==_mycategory) && (_price>2500000))
    {
        pc = PrivilegeCategory::VIP;
    }
    else if(_mycategory==Category::DEFENSE)
    {
        pc = PrivilegeCategory::GOVT;
    }
    else
    {
        pc = PrivilegeCategory::PERSONAL;
    }
    return pc;
}

float Automobile::GreenPassCost()
{
    float myprice;
    if(_mycategory==Category::PRIVATE || _mycategory==Category::TRANSPORT)
    {
        myprice = 0.1*_price;
    }
    else
    {
        myprice = 0.0*_price;
    }
    return myprice;
}


std::ostream &operator<<(std::ostream &os, const Automobile &rhs) {
    os << "_id: " << rhs._id
       << " _brand: " << rhs._brand
       << " _privilegecategory: " << static_cast<int>(rhs._privilegecategory)
       << " _mycategory: " << static_cast<int>(rhs._mycategory)
       << " _price: " << rhs._price
       << " _model: " << rhs._model;
    return os;
}

