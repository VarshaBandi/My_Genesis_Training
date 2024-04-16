#include"Funct.h"

void CreateObjects(Container& data)
{
    data.emplace_back(std::make_shared<EvCar>(231,ChassisType::LADDER,23.f));
    data.emplace_back(std::make_shared<EvCar>(747,ChassisType::TUBULAR,78.f));
    data.emplace_back(std::make_shared<ICECar>(12,FuelType::DIESEL,123));
    data.emplace_back(std::make_shared<ICECar>(46,FuelType::PETROL,78));
}

Container FirstNInstances(Container &data,CarType type)
{
    Container result;
    for(auto ptr:data)
    {
        if(type == CarType::EvCar)
        {
            if(std::holds_alternative<EvPointer>(ptr))
            {
                auto gt = std::get<EvPointer>(ptr);
                result.emplace_back(gt);
                //std::cout<<*gt<<"\n";
            }
        }
        else
        {
            if(std::holds_alternative<ICEPointer>(ptr))
            {
                auto gt = std::get<ICEPointer>(ptr);
                result.emplace_back(gt);
                //std::cout<<*gt<<"\n";
            }
        }
    }
    return result;
}

bool AllInstancesICE(Container &data)
{
    int count = 0;
    bool flag = false;
    for(auto ptr:data)
    {
        if(std::holds_alternative<ICEPointer>(ptr))
        {
            auto gt = std::get<ICEPointer>(ptr);
             if(gt->fuelTankCapacity()>30)
             {
                count++;
             }
        }
    }
    if(count == data.size())
    {
        flag = true;
    }
    return flag;
}

void CountInstancesEvCar(Container &data)
{
    int count = 0;
    for(auto ptr:data)
    {
        if(std::holds_alternative<EvPointer>(ptr))
        {
            auto gt = std::get<EvPointer>(ptr);
            count++;
        }
    }
    std::cout<<"Count of EvCar instances is: "<<count<<"\n";
}

ChassisType FindChassisType(Container &data, int id)
{
    ChassisType ct;
    for(auto ptr:data)
    {
        if(std::holds_alternative<EvPointer>(ptr))
        {
            auto gt = std::get<EvPointer>(ptr);
            if(gt->evid()==id)
            {
                ct = gt->evtype();
            }
        }
    }
    return ct;
}

void DisplayTotalBatteryCapacity(Container &data)
{
    float total = 0;
    for(auto ptr:data)
    {
        if(std::holds_alternative<EvPointer>(ptr))
        {
            auto gt = std::get<EvPointer>(ptr);
            total += gt->batteryCapacity();
        }
    }
    std::cout<<"Total battery capacity of all EvCar instances is: "<<total<<"\n";
}

void DisplayNthInstanceattributes(Container &data, int n)
{
    int count = 0;
    for(auto ptr:data)
    {
        count++;
        if(count==n)
        {
            if(std::holds_alternative<EvPointer>(ptr))
            {
                auto gt = std::get<EvPointer>(ptr);
                std::cout<<"Attributes of Nth instance are: "<<"\n";
                std::cout<<*gt;
            }
            if(std::holds_alternative<ICEPointer>(ptr))
            {
                auto gt = std::get<ICEPointer>(ptr);
                std::cout<<"Attributes of Nth instance are: "<<"\n";
                std::cout<<*gt;
            }
        }
        
    }
}
