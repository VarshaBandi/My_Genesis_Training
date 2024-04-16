#include "Flight.hpp"

Flight::Flight(std::string flightOperatorCompany, FlightOperatorType flightType, RefType refType)
    :_flightOperatorCompany(flightOperatorCompany),_flightType(flightType),_refType(refType)
{
}
std::ostream &operator<<(std::ostream &os, const Flight &rhs) {
    os << "_flightOperatorCompany: " << rhs._flightOperatorCompany
       << " _refType: " << rhs._refType.get()
       <<" _ flightType: "<<static_cast<int>(rhs._flightType);
    return os;
}
