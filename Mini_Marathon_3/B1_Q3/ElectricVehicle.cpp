#include "ElectricVehicle.h"

ElectricVehicle::ElectricVehicle(int id, VehicleType type, float price, int seatcount, int enginehorsepower)
    :_id(id),_type(type),_price(price),_seatCount(seatcount),_engineHorsepower(enginehorsepower)
{
}
std::ostream &operator<<(std::ostream &os, const ElectricVehicle &rhs) {
    os << "_id: " << rhs._id
       << " _type: " << static_cast<int>(rhs._type)
       << " _price: " << rhs._price
       << " _seatCount: " << rhs._seatCount
       << " _engineHorsepower: " << rhs._engineHorsepower;
    return os;
}

