#include "Functionality.h"

void CreateObjects(Container &data)
{
    data.emplace_back(std::make_shared<Ev2Wheeler>(12,VehicleType::REGULAR,234.0f,32,21, 500,ConnectedTechType::DIGITAL));
    data.emplace_back(std::make_shared<Ev2Wheeler>(23,VehicleType::REGULAR,340.0f,32,21, 500,ConnectedTechType::DIGITAL));
    data.emplace_back(std::make_shared<EvCar>(50,VehicleType::TRANSPORT,983.f,89,82,300.0f,ChargingType::AC));
    data.emplace_back(std::make_shared<Ev2Wheeler>(45,VehicleType::REGULAR,500.0f,32,21, 500,ConnectedTechType::DIGITAL));
    data.emplace_back(std::make_shared<EvCar>(38,VehicleType::TRANSPORT,383.f,21,38,199.0f,ChargingType::DC_FAST_CHARGE));
}

std::optional<std::shared_ptr<ElectricVehicle>> DisplayAttributes(Container &data, std::future<int>& ft)
{
    int id = ft.get();
    auto itr = std::find_if(data.begin(),data.end(),[&](Epointer& eptr)
    {
        return eptr->id()==id;
    });
    //std::cout<<*itr<<"\n";
    if(itr==data.end())
    {
        return std::nullopt;
    }
    return (*itr);
}

void DisplayAveragePrice(Container &data)
{
    int count =0;
    float ans = std::accumulate(data.begin(),data.end(),0.0f,[&](float sum,Epointer& eptr)
    {
        if(eptr->engineHorsepower()<600)
        {
            count++;
            sum += eptr->price();
        }
        return sum/count;
    });
    std::cout<<"Average: "<<ans<<"\n";
}

Container ReturnInstances(Container &data, float pric)
{
    Container result(data.size());
    auto itr = std::copy_if(data.begin(),data.end(),result.begin(),[&](Epointer& eptr)
    {
        return eptr->price()>pric;
    });

    int size = std::distance(result.begin(),itr);
    result.resize(size);

    return result;
}

void TotalGSTAmount(Container &data)
{
    float res = std::accumulate(data.begin(),data.end(),0.0f,[](float sum,Epointer& eptr)
    {
        return sum += eptr->CalculateGst();
    });
    std::cout<<"Total GST Amount is: "<<res<<"\n";
}

void TotalExchangeAmount(Container &data)
{
    float res = std::accumulate(data.begin(),data.end(),0.0f,[](float sum,Epointer& eptr)
    {
        return sum += eptr->CalculateExchangeamount();
    });
    std::cout<<"Total Exchange Amount is: "<<res<<"\n";
}

