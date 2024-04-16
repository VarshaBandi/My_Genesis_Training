#include "Sensor.h"

std::ostream &operator<<(std::ostream &os, const Sensor &rhs) {
    os << "_id: " << rhs._id
       << " _name: " << rhs._name
       << " _reading: " << rhs._reading
       << " _type: ";
       switch(rhs.gettype())
       {
        case SensorType::CABIN_PRESSURE:
            std::cout<<"CABIN_PRESSURE";
            break;
        case SensorType::TEMPERATURE:
            std::cout<<"TEMPERATURE";
            break;
        case SensorType::TYRE_PRESSURE:
            std::cout<<"TYRE_PRESSURE";
        default:
            std::cout<<"Invalid";
       }
       std::cout<<"\n";
    return os;
}
Sensor::Sensor(int id, std::string name, SensorType type, int reading)
    :_id(id),_name(name),_type(type),_reading(reading)
{
}
