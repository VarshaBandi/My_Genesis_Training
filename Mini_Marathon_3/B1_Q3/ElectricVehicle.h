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
    ElectricVehicle()=delete;
    ElectricVehicle(const ElectricVehicle&)=delete;
    ElectricVehicle(ElectricVehicle&&)=delete;
    ElectricVehicle& operator=(const ElectricVehicle&)=delete;
    ElectricVehicle& operator=(ElectricVehicle&&)=delete;
     ~ElectricVehicle()=default;

    virtual float CalculateGst()=0;
    virtual float CalculateExchangeamount()=0;

    ElectricVehicle(int id,VehicleType type,float price,int seatcount,int enginehorsepower);

    int id() const { return _id; }

    VehicleType type() const { return _type; }

    float price() const { return _price; }

    int seatCount() const { return _seatCount; }

    int engineHorsepower() const { return _engineHorsepower; }

    friend std::ostream &operator<<(std::ostream &os, const ElectricVehicle &rhs);
};

#endif // ELECTRICVEHICLE_H
