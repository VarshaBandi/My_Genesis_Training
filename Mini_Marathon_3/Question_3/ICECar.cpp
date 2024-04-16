#include "ICECar.h"

ICECar::ICECar(int id, FuelType type, int capacity)
    :_id(id),_type(type),_fuelTankCapacity(capacity)
{
}
std::ostream &operator<<(std::ostream &os, const ICECar &rhs) {
    os << "_id: " << rhs._id
       << " _type: " << static_cast<int>(rhs._type)
       << " _fuelTankCapacity: " << rhs._fuelTankCapacity;
    return os;
}
