#include "Func.hpp"

void CreateObjects(FlightContainer &flightData,PlaneContainer &planeData)
{
    planeData.emplace_back(Airplane("Air1",AirplaneType::JUMBO,23));
    planeData.emplace_back(Airplane("Air2",AirplaneType::NEO,15));
    planeData.emplace_back(Airplane("Air3",AirplaneType::CRUISELINER,90));

    flightData.emplace_back(std::make_shared<Flight>("Airways",FlightOperatorType::DOMESTIC,planeData[0]));
    flightData.emplace_back(std::make_shared<Flight>("AirIndia",FlightOperatorType::INTERNATIONAL,planeData[1]));
    flightData.emplace_back(std::make_shared<Flight>("AirNew",FlightOperatorType::DOMESTIC,planeData[2]));
}

std::function<AirplaneType(FlightContainer&)> ReturnAirplaneType= [](FlightContainer &flightData)->AirplaneType
{
    if(flightData.empty())
    {
        throw EmptyContainer("Data is empty!");
    }
    int count=flightData[0]->refType().get().airplaneSeatCount();
    AirplaneType type;

    auto itr = std::min_element(flightData.begin(),flightData.end(),[](FlightPointer& fptr1,FlightPointer& fptr2)
    {
        return fptr1->refType().get().airplaneSeatCount()<fptr2->refType().get().airplaneSeatCount();
    });
    auto itr1 = std::find_if(flightData.begin(),flightData.end(),[&](FlightPointer& fptr)
    {
        return fptr->refType().get().airplaneSeatCount() == (*itr)->refType().get().airplaneSeatCount();
    });

    return  (*itr)->refType().get().airplaneType();
    // for(auto ptr:flightData)
    // {
    //     if((ptr->refType().get().airplaneSeatCount())<count)
    //     {
    //         count = ptr->refType().get().airplaneSeatCount();
    //     }
    // }
    // for(auto ptr:flightData)
    // {
    //     if(count == ptr->refType().get().airplaneSeatCount())
    //     {
    //         type=ptr->refType().get().airplaneType();
    //         break;
    //     }
    // }
};

// std::function<MyPlanecontainer (FlightContainer &flightData,int value)> ReturnAirplaneInstances=[](FlightContainer &flightData,int value)->MyPlanecontainer
// {
//     if(flightData.empty())
//     {
//         throw EmptyContainer("Data is empty!");
//     }
//     // MyPlanecontainer result;
//     // for(auto ptr:flightData)
//     // {
//     //     if(ptr->refType().get().airplaneSeatCount()>value)
//     //     {
//     //        result.emplace_back(ptr->refType().get());
//     //        //std::cout<<"The instances whose airplaneseatcount > value is: "<<ptr->refType().get()<<"\n";
//     //     }
//     //  }
//     FlightContainer temp(flightData.size());
//     MyPlanecontainer result;

//     auto itr = std::copy_if(flightData.begin(),flightData.end(),temp.begin(),[&](FlightPointer& fptr)
//     {
//         return fptr->refType().get().airplaneSeatCount()>value;
//     });
//     int size = std::distance(temp.begin(),itr);
//     temp.resize(size);

//     std::for_each(temp.begin(),temp.end(),[&](FlightPointer &fptr)
//     {
//         result.emplace_back(fptr->refType().get());
//     });

//     return result;
// };

std::function<int (FlightContainer &flightData)> ReturnAirplaneSeatCount =[](FlightContainer &flightData)
{
    if(flightData.empty())
    {
        throw EmptyContainer("Data is empty!");
    }
    //int sum = 0;
    // for(auto ptr:flightData)
    // {
    //     sum += ptr->refType().get().airplaneSeatCount();
    // }
    int sem = std::accumulate(flightData.begin(),flightData.end(),0,[](int sum,FlightPointer& fptr)
    {
        return sum+fptr->refType().get().airplaneSeatCount();
    });
    return sem;
};

std::function<std::vector<Flight>(FlightContainer &flightData,int value)> ReturnThresholdValue = [](FlightContainer &flightData,int value)
{
    std::vector<Flight> result;
    // for(auto ptr:flightData)
    // {
    //     if(ptr->refType().get().airplaneSeatCount()>value)
    //     {
    //         result.emplace_back(*ptr);
    //     }
    // }
    std::for_each(flightData.begin(),flightData.end(),[&](FlightPointer& fptr)
    {
        if(fptr->refType().get().airplaneSeatCount()>value)
        {
            result.emplace_back(*fptr);
        }
    });
    return result;
};

// std::function<std::vector<Flight>(FlightContainer &flightData,FlightOperatorType type)> ReturnTypeAirplaneInstances = [](FlightContainer &flightData,FlightOperatorType type)
// -> std::vector<Flight> 
// {
//     std::vector<Flight>result;
//     for(auto ptr:flightData)
//     {
//         if(ptr->flightType()==type)
//         {
//             result.emplace_back(*ptr);
//         }
//     }
//     return result;
// };

// std::function<std::vector<Flight>(FlightContainer &flightData,FlightOperatorType& type)> ReturnTypeAirplaneInstances = [](FlightContainer &flightData,FlightOperatorType& type)
// -> std::vector<Flight> 
// {
//     std::vector<Flight>result;
//     for(auto ptr:flightData)
//     {
//         if(ptr->flightType()==type)
//         {
//             result.emplace_back(*ptr);
//         }
//     }
//     return result;
// };


