#ifndef ELECTRICVEHICLE_H
#define ELECTRICVEHICLE_H

#include"VehicleType.h"
#include <ostream>

class ElectricVehicle
{
private:
    int _id;
    VehicleType _type;
    float _price;
    int _seatCount;
    int _engineHorsepower;
public:
    ElectricVehicle()=default;
    ElectricVehicle(const ElectricVehicle&)=delete;
    ElectricVehicle(ElectricVehicle&&)=default;
    ElectricVehicle& operator=(const ElectricVehicle&)=delete;
    ElectricVehicle& operator=(ElectricVehicle&&)=default;
     ~ElectricVehicle()=default;

    virtual float CalculateGst()=0;
    virtual float  CalculateExchangeamount()=0;

    friend bool operator<(const ElectricVehicle& id1,const ElectricVehicle& id2)
    {
        return  id1._id < id2._id;
    }

    // bool operator()(const ElectricVehicle& id1,const ElectricVehicle& id2)
    // {
    //     return  id1._id > id2._id;
    // }

    ElectricVehicle(int id,VehicleType type,float price,int seatcount,int enginehorsepower);

    int id() const { return _id; }

    VehicleType type() const { return _type; }

    float price() const { return _price; }

    int seatCount() const { return _seatCount; }

    int engineHorsepower() const { return _engineHorsepower; }

    friend std::ostream &operator<<(std::ostream &os, const ElectricVehicle &rhs);
};

#endif // ELECTRICVEHICLE_H
