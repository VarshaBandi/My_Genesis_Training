#ifndef EVCAR_H
#define EVCAR_H

#include"ChargingType.h"
#include"ElectricVehicle.h"
#include <ostream>

class EvCar:public ElectricVehicle
{
private:
    float _batteryCapacity;
    ChargingType _chargingtype;
public:
    EvCar()=delete;
    EvCar(const EvCar&)=delete;
    EvCar(EvCar&&)=delete;
    EvCar& operator=(const EvCar&)=delete;
    EvCar& operator=(EvCar&&)=delete;
     ~EvCar()=default;

    float CalculateGst() override;
    float CalculateExchangeamount() override;

    EvCar(int id,VehicleType type,float price,int seatcount,int enginehorsepower,float batteryCapacity,ChargingType chargingtype);

    float batteryCapacity() const { return _batteryCapacity; }

    ChargingType chargingtype() const { return _chargingtype; }

    friend std::ostream &operator<<(std::ostream &os, const EvCar &rhs);
};

#endif // EVCAR_H
