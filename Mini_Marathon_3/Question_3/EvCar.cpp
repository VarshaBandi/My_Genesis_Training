#include "EvCar.h"

EvCar::EvCar(int id, ChassisType type, float capacity)
    :_Evid(id),_Evtype(type),_batteryCapacity(capacity)
{
}
std::ostream &operator<<(std::ostream &os, const EvCar &rhs) {
    os << "_id: " << rhs._Evid
       << " _type: " << static_cast<int>(rhs._Evtype)
       << " _batteryCapacity: " << rhs._batteryCapacity;
    return os;
}

