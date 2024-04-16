#ifndef FLIGHT_HPP
#define FLIGHT_HPP
#include"FlightOperatorType.h"
#include<string>
#include<functional>
#include <ostream>
#include"Airplane.hpp"
#include<memory>

using RefType = std::reference_wrapper<Airplane>;
//using RefType = std::shared_ptr<Airplane>;

class Flight
{
private:
    std::string _flightOperatorCompany;
    FlightOperatorType _flightType;
    RefType _refType;
public:
    Flight()=delete;
    Flight(const Flight&)=default;
    Flight(Flight&&)=default;
    Flight& operator=(const Flight&)=delete;
    Flight& operator=(Flight&&)=delete;
     ~Flight()=default;
    
    Flight(std::string flightOperatorCompany,FlightOperatorType flightType,RefType refType);

    std::string flightOperatorCompany() const { return _flightOperatorCompany; }
    FlightOperatorType flightType() const { return _flightType; }
    RefType refType() const { return _refType; }

    friend std::ostream &operator<<(std::ostream &os, const Flight &rhs);
};

#endif // FLIGHT_HPP
