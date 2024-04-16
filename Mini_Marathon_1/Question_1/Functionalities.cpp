#include "Functionalities.h"

void CreateObjects(Container &data)
{
    data.emplace_back(std::make_shared<Sensor>(123,"S01",SensorType::TEMPERATURE,24));
    data.emplace_back(std::make_shared<Sensor>(743,"S02",SensorType::CABIN_PRESSURE,15));
    data.emplace_back(std::make_shared<Sensor>(923,"S03",SensorType::TYRE_PRESSURE,6));
}


bool findInstanceOfReading(Container &data)
{
    for(Pointer& ptr:data)
    {
        if(ptr->getreading()<0)
        {
            throw std::runtime_error{"Reading cannot be negative!"};
        }
        else if(ptr->getreading()>20)
        {
            throw std::runtime_error{"Reading cannot be greater than 20!"};
        }
        else if(ptr->getreading()/10==0)
        {
            throw std::runtime_error{"Reading cannot be divisible by 10"};
        }
        else if(ptr->getreading()>25)
        {
            return true;
        }
    }
    return false;
}

void findAverageReadingValue(Container& data,SensorType type)
{
    float _average;
    int _sum=0,_count;
    for(Pointer& ptr:data)
    {
        if(ptr->gettype()==type)
        {
            _count++;
            _sum += ptr->getreading();
        }
    }
    _average = _sum/_count;
    std::cout<<"Average is: "<<_average<<"\n";
}

std::list<Sensor> findSensorInstances(Container &data)
{
    std::list<Sensor>result;
    for(Pointer& ptr:data)
    {
        if(ptr->getreading()>=15 && ptr->gettype()==SensorType::TYRE_PRESSURE)
        {
            result.emplace_back(*ptr);
        }
    }
    return result;
}
