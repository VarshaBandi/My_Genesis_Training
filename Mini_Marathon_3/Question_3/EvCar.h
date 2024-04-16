#ifndef EVCAR_H
#define EVCAR_H
#include"ChassisType.h"
#include <ostream>

class EvCar
{
private:
    int _Evid;
    ChassisType _Evtype;
    float _batteryCapacity;
public:
    EvCar()=delete;
    EvCar(const EvCar&)=delete;
    EvCar(EvCar&&)=delete;
    EvCar& operator=(const EvCar&)=delete;
    EvCar& operator=(EvCar&&)=delete;
     ~EvCar()=default;

    EvCar(int id,ChassisType type,float capacity);


    float batteryCapacity() const { return _batteryCapacity; }

    int evid() const { return _Evid; }

    ChassisType evtype() const { return _Evtype; }

    friend std::ostream &operator<<(std::ostream &os, const EvCar &rhs);
};

#endif // EVCAR_H
