#ifndef SERVICERECORD_H
#define SERVICERECORD_H

#include"Type.h"
#include<string>
#include <ostream>

class ServiceRecord
{
private:
    std::string _service_id;
    Type _type;
    int _duration_hours;
    float _charges;
    std::string _service_attendant_name;
    std::string _service_location;
public:
    ServiceRecord()=delete;
    ServiceRecord(const ServiceRecord&)=delete;
    ServiceRecord(ServiceRecord&&)=delete;
    ServiceRecord& operator=(const ServiceRecord&)=delete;
    ServiceRecord& operator=(ServiceRecord&&)=delete;
     ~ServiceRecord()=default;

    ServiceRecord(std::string id,Type type,int hours,float charges,std::string name,std::string location);

    std::string serviceId() const { return _service_id; }
    Type type() const { return _type; }
    int durationHours() const { return _duration_hours; }
    float charges() const { return _charges; }
    std::string serviceAttendantName() const { return _service_attendant_name; }
    std::string serviceLocation() const { return _service_location; }

    friend std::ostream &operator<<(std::ostream &os, const ServiceRecord &rhs);
};

#endif // SERVICERECORD_H
