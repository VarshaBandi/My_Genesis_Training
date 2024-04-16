#ifndef EV2WHEELER_H
#define EV2WHEELER_H
#include"ElectricVehicle.h"
#include"ConnectedTechtype.h"
#include <ostream>

class Ev2Wheeler:public ElectricVehicle
{
private:
    float _Ev2batteryCapacity;
    ConnectedTechType _connectedtype;
public:
    Ev2Wheeler()=delete;
    Ev2Wheeler(const Ev2Wheeler&)=delete;
    Ev2Wheeler(Ev2Wheeler&&)=default;
    Ev2Wheeler& operator=(const Ev2Wheeler&)=delete;
    Ev2Wheeler& operator=(Ev2Wheeler&&)=delete;
     ~Ev2Wheeler()=default;

    float CalculateGst() override;
    float CalculateExchangeamount() override;

    Ev2Wheeler(int id,VehicleType type,float price,int seatcount,int enginehorsepower,float Ev2batteryCapacity,ConnectedTechType connectedtype);

    float Ev2batteryCapacity() const { return _Ev2batteryCapacity; }

    ConnectedTechType connectedtype() const { return _connectedtype; }

    friend std::ostream &operator<<(std::ostream &os, const Ev2Wheeler &rhs);

    // friend bool operator<(const Ev2Wheeler& id1,const Ev2Wheeler& id2)
    // {
    //     return  id1.id() < id2.id();
    // }


};


#endif // EV2WHEELER_H
