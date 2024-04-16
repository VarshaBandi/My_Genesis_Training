#include "Vehicle.h"

Vehicle::Vehicle(std::string vehicleid, int months, ServPointer record)
    :_vehicle_id(vehicleid),_active_duration_months(months),_latest_service_record(record)
{
}
std::ostream &operator<<(std::ostream &os, const Vehicle &rhs) {
    os << "_vehicle_id: " << rhs._vehicle_id
       << " _active_duration_months: " << rhs._active_duration_months
       << " _latest_service_record: " << *(rhs._latest_service_record);
    return os;
}
