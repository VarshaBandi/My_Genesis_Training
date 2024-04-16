#include"Functionalities.h"
#include<iostream>

int main()
{
    Container data;
    CreateObjects(data);

    try
    {
        bool answer = findInstanceOfReading(data);
        std::cout<<"Finding Instance with reading greater than 25: "<<answer<<"\n";
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

    try
    {
        findAverageReadingValue(data,SensorType::TEMPERATURE);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

    try
    {
        std::list<Sensor> result = findSensorInstances(data);
        std::cout<<"Sensor Instances with reading greater>=15 and type is TYRE_PRESSURE is : "<<"\n";
        for(Pointer& ptr:data)
        {
            std::cout<<*ptr;
        }
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    
    
}