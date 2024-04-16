#include "Airplane.hpp"

Airplane::Airplane(std::string airplaneManufacturer, AirplaneType airplaneType, int airplaneSeatCount)
:_airplaneManufacturer(airplaneManufacturer),_airplaneType(airplaneType),_airplaneSeatCount(airplaneSeatCount)
{
}
std::ostream &operator<<(std::ostream &os, const Airplane &rhs) {
    os << "_airplaneManufacturer: " << rhs._airplaneManufacturer
       << " _airplaneSeatCount: " << rhs._airplaneSeatCount
       << " _airplaneType: " << static_cast<int>(rhs._airplaneType);

    return os;
}
