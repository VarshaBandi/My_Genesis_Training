#include "EvCar.h"
std::ostream &operator<<(std::ostream &os, const EvCar &rhs) {
    os << static_cast<const ElectricVehicle &>(rhs)
       << " _batteryCapacity: " << rhs._batteryCapacity
       << " _type: " << static_cast<int>(rhs._chargingtype);
    return os;
}
float EvCar::CalculateGst()
{
    return 0.05*id();
}
float EvCar::CalculateExchangeamount()
{
    float res;
    if(type()==VehicleType::TRANSPORT)
    {
        res =  0.6*price();
    }
    else
    {
        res =  0.75*price();
    }

    return res;
}
EvCar::EvCar(int id, VehicleType type, float price, int seatcount, int enginehorsepower, float batteryCapacity, ChargingType chargingtype)
    : ElectricVehicle(id, type, price, seatcount, enginehorsepower), _batteryCapacity(batteryCapacity), _chargingtype(chargingtype)
{
}
