#include"Funct.h"

int main()
{
    Container data;

    CreateObjects(data);

    Container cn = FirstNInstances(data,CarType::EvCar);
    std::cout<<"Instances of ICECar are: "<<"\n";
    for(auto ptr:cn)
    {
        if(std::holds_alternative<EvPointer>(ptr))
        {
            auto gt = std::get<EvPointer>(ptr);
            std::cout<<*gt<<"\n";
        }
        if(std::holds_alternative<ICEPointer>(ptr))
        {
            auto gt = std::get<ICEPointer>(ptr);
            std::cout<<*gt<<"\n";
        }
    }



    bool fl = AllInstancesICE(data);
    if(fl)
    {
        std::cout<<"All Instances of ICE Car has fuel capacity greater than 30"<<"\n";
    }
    else
    {
        std::cout<<"All Instances of ICE Car doesn't have fuel capacity greater than 30"<<"\n";
    }

    CountInstancesEvCar(data);

    ChassisType ct = FindChassisType(data,747);

    DisplayTotalBatteryCapacity(data);
    DisplayNthInstanceattributes(data,3);
}