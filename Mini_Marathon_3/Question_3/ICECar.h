#ifndef ICECAR_H
#define ICECAR_H

#include"FuelType.h"
#include <ostream>

class ICECar
{
private:
    int _id;
    FuelType _type;
    int _fuelTankCapacity;
public:
    ICECar()=delete;
    ICECar(const ICECar&)=delete;
    ICECar(ICECar&&)=delete;
    ICECar& operator=(const ICECar&)=delete;
    ICECar& operator=(ICECar&&)=delete;
     ~ICECar()=default;

    ICECar(int id,FuelType type,int capacity);

    int id() const { return _id; }

    FuelType type() const { return _type; }

    int fuelTankCapacity() const { return _fuelTankCapacity; }

    friend std::ostream &operator<<(std::ostream &os, const ICECar &rhs);
};

#endif // ICECAR_H
