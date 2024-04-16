#include "ServiceRecord.h"

ServiceRecord::ServiceRecord(std::string id, Type type, int hours, float charges, std::string name, std::string location)
    :_service_id(id),_type(type),_duration_hours(hours),_charges(charges),_service_attendant_name(name),_service_location(location)
{
}
std::ostream &operator<<(std::ostream &os, const ServiceRecord &rhs) {
    os << "_service_id: " << rhs._service_id
       << " _type: " << static_cast<int>(rhs._type)
       << " _duration_hours: " << rhs._duration_hours
       << " _charges: " << rhs._charges
       << " _service_attendant_name: " << rhs._service_attendant_name
       << " _service_location: " << rhs._service_location;
    return os;
}
