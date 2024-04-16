#include "Ev2Wheeler.h"
std::ostream &operator<<(std::ostream &os, const Ev2Wheeler &rhs) {
    os << static_cast<const ElectricVehicle &>(rhs)
       << " _Ev2batteryCapacity: " << rhs._Ev2batteryCapacity
       << " _connectedtype: " << static_cast<int>(rhs._connectedtype);
    return os;
}
float Ev2Wheeler::CalculateGst()
{
    return 0.1*price();
}
float Ev2Wheeler::CalculateExchangeamount()
{
    return 0.32*price();
}
Ev2Wheeler::Ev2Wheeler(int id, VehicleType type, float price, int seatcount, int enginehorsepower, float Ev2batteryCapacity, ConnectedTechType connectedtype)
    :ElectricVehicle(id, type, price, seatcount, enginehorsepower),_Ev2batteryCapacity(Ev2batteryCapacity),_connectedtype(connectedtype)
{
}
