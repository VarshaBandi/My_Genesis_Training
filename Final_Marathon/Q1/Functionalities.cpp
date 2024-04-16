#include "Functionalities.h"

void CreateObjects(MyContainer &data)
{
    data[0] = std::make_shared<Automobile>("101","Honda",PrivilegeCategory::GOVT,Category::PRIVATE,745.f,"Honda");
    data[1] = std::make_shared<Automobile>("201","suzuki",PrivilegeCategory::GOVT,Category::DEFENSE,345.f,"suzuki");
    data[2] = std::make_shared<Automobile>("301","Maruti",PrivilegeCategory::GOVT,Category::DEFENSE,245.f,"Maruti");
}

void DisplayGreenPassCost(MyContainer &data, std::string myId)
{
    if(data.empty())
    {
        throw EmptyContainerException("Data is empty");
    }
    std::cout<<"Displaying greenPassCost: "<<"\n";
    auto itr = std::find_if(data.begin(),data.end(),[&](AutomobilePointer& ptr)
    {
        return ptr->id()==myId;
    });

    std::cout<<(*itr)->GreenPassCost();
    std::cout<<"\n";

}

void AveragePrice(MyContainer &data)
{
    if(data.empty())
    {
        throw EmptyContainerException("Data is empty");
    }
    float sum = std::accumulate(data.begin(),data.end(),0.0f,[](float sum,AutomobilePointer& ptr)
    {
        return sum+ptr->price();
    });
    float avg = sum/data.size();
    std::cout<<"Average is: "<<avg<<"\n";
}

void DisplayFindPrivilegeType(MyContainer &data)
{
    if(data.empty())
    {
        throw EmptyContainerException("Data is empty");
    }
    std::for_each(data.begin(),data.end(),[](AutomobilePointer& ptr)
    {
        std::cout<<static_cast<int>(ptr->FindPrivilegeType())<<"\n";
    });
}
