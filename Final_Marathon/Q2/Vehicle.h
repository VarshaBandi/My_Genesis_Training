#ifndef VEHICLE_H
#define VEHICLE_H

#include"ServiceRecord.h"
#include<memory>
#include <ostream>

using ServPointer = std::shared_ptr<ServiceRecord>;

class Vehicle
{
private:
    std::string _vehicle_id;
    int _active_duration_months;
    ServPointer _latest_service_record;
public:
    Vehicle()=delete;
    Vehicle(const Vehicle&)=delete;
    Vehicle(Vehicle&&)=delete;
    Vehicle& operator=(const Vehicle&)=delete;
    Vehicle& operator=(Vehicle&&)=delete;
     ~Vehicle()=default;

    Vehicle(std::string vehicleid,int months,ServPointer record);

    std::string vehicleId() const { return _vehicle_id; }

    int activeDurationMonths() const { return _active_duration_months; }

    ServPointer latestServiceRecord() const { return _latest_service_record; }

    friend std::ostream &operator<<(std::ostream &os, const Vehicle &rhs);
};

#endif // VEHICLE_H
