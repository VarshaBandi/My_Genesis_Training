#ifndef AIRPLANE_HPP
#define AIRPLANE_HPP
#include<string>
#include <ostream>
#include"AirplaneType.h"

class Airplane
{
private:
    std::string _airplaneManufacturer;
    AirplaneType _airplaneType;
    int _airplaneSeatCount;
public:
    Airplane()=delete;
    Airplane(const Airplane&)=default;
    Airplane(Airplane&&)=default;
    Airplane& operator=(const Airplane&)=delete;
    Airplane& operator=(Airplane&&)=delete;
     ~Airplane()=default;

    Airplane(std::string airplaneManufacturer,AirplaneType airplaneType,int airplaneSeatCount);

    std::string airplaneManufacturer() const { return _airplaneManufacturer; }
    AirplaneType airplaneType() const { return _airplaneType; }
    int airplaneSeatCount() const { return _airplaneSeatCount; }

    friend std::ostream &operator<<(std::ostream &os, const Airplane &rhs);
};

#endif // AIRPLANE_HPP
