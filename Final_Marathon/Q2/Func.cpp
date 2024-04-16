#include "Func.h"

void CreateObjects(MapContainer &data)
{
    data.emplace(std::make_pair<std::string,VehiclePointer>("A0",std::make_shared<Vehicle>("A0",5,std::make_shared<ServiceRecord>("101",Type::REGULAR,6,234.f,"Veh1","Pune"))));
    data.emplace(std::make_pair<std::string,VehiclePointer>("A2",std::make_shared<Vehicle>("A2",1,std::make_shared<ServiceRecord>("201",Type::REPAIR,6,234.f,"Veh1","Pune"))));
    data.emplace(std::make_pair<std::string,VehiclePointer>("A5",std::make_shared<Vehicle>("A5",4,std::make_shared<ServiceRecord>("301",Type::REGULAR,6,234.f,"Veh1","Pune"))));
    data.emplace(std::make_pair<std::string,VehiclePointer>("A3",std::make_shared<Vehicle>("A3",5,std::make_shared<ServiceRecord>("401",Type::REPAIR,6,234.f,"Veh1","Pune"))));
    data.emplace(std::make_pair<std::string,VehiclePointer>("A1",std::make_shared<Vehicle>("A1",7,std::make_shared<ServiceRecord>("501",Type::REGULAR,6,234.f,"Veh1","Pune"))));
}

MapContainer ReturnNVehicleInstances(MapContainer &data, int N)
{
    if(data.empty())
    {
        throw EmptyContainerException("Data is empty!");
    }

    MapContainer result;
    int count = 0;

    std::for_each(data.begin(),data.end(),[&](std::pair<std::string,VehiclePointer>&& ptr)
    {
        count++;
        if(count>=N)
        {
            result.emplace(ptr);
        }
    });
    return result;
}

float AverageCharges(MapContainer &data)
{
    if(data.empty())
    {
        throw EmptyContainerException("Data is empty");
    }

    float res = std::accumulate(data.begin(),data.end(),0.0f,[](float sum,std::pair<std::string,VehiclePointer>&& ptr)
    {
        return sum + ptr.second->latestServiceRecord()->charges();
    });

    float avg = res/data.size();

    return avg;
}

std::string MatchServiceID(MapContainer &data,std::string MyId)
{
    if(data.empty())
    {
        throw EmptyContainerException("Data is Empty");
    }

    auto itr = std::find_if(data.begin(),data.end(),[&](std::pair<std::string,VehiclePointer>&& ptr)
    {
        return MyId == ptr.second->latestServiceRecord()->serviceId();
    });

    return (itr)->second->vehicleId();
}

std::unordered_map<std::string,std::string> KeyValuePair(MapContainer &data)
{
    if(data.empty())
    {
        throw EmptyContainerException("Data is empty");
    }

    auto itr = std::max_element(data.begin(),data.end(),[](std::pair<std::string,VehiclePointer>&& ptr1,std::pair<std::string,VehiclePointer>&& ptr2)
    {
        return (ptr1.second->latestServiceRecord()->charges())>(ptr2.second->latestServiceRecord()->charges());
    });

    std::unordered_map<std::string,std::string>result;

    result.emplace(std::make_pair<std::string,std::string>(itr->second->vehicleId(),itr->second->latestServiceRecord()->serviceId()));
    
    return result ;
}

std::unordered_map<std::string, std::string> ReturnPairList(MapContainer &data, std::list<std::string> &Mylist)
{
    std::unordered_map<std::string, std::string> result;

    std::for_each(data.begin(),data.end(),[&](std::pair<std::string,VehiclePointer>&& ptr)
    {
        for(auto l:Mylist)
        {
            if(l==ptr.second->vehicleId())
            {
                result.emplace(std::make_pair<std::string,std::string>(ptr.second->vehicleId(),ptr.second->latestServiceRecord()->serviceId()));
            }
        }
    });

    return result;
}
