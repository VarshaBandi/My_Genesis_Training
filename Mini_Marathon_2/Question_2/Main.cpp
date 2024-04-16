#include"Func.hpp"


int main()
{
    FlightContainer flightData;
    PlaneContainer PlaneData;

    try
    {
        CreateObjects(flightData,PlaneData);
    }
    catch(EmptyContainer& e)
    {
        std::cerr << e.what() << '\n';
    }

    // try
    // {
    //     AirplaneType  ans =ReturnAirplaneType(flightData);
    //     std::cout<<static_cast<int>(ans);
    // }
    // catch(EmptyContainer& e)
    // {
    //     std::cerr << e.what() << '\n';
    // }

    // try
    // {
    //     //std::vector<FnType> result= ReturnAirplaneInstances(flightData,23);
    //     std::future<MyPlanecontainer> result = std::async(std::launch::async,ReturnAirplaneInstances,std::ref(flightData),23);
    //     std::cout<<"Airplane instances above the value are: "<<"\n";
    //     MyPlanecontainer res = result.get();
    //     for(auto &ins:res)
    //     {
    //         std::cout<<*ins<<"\n";
    //     }
    // }
    // catch(EmptyContainer& e)
    // {
    //     std::cerr << e.what() << '\n';
    // }

    try
    {
        int ans = ReturnAirplaneSeatCount(flightData);
        std::cout<<"Total airplaneSeatCount is: "<<ans<<"\n";
    }
    catch(EmptyContainer& e)
    {
        std::cerr << e.what() << '\n';
    }
    // try
    // {
    //     std::vector<Flight> answer = ReturnTypeAirplaneInstances(flightData,FlightOperatorType::DOMESTIC);
    //     for(auto i:answer)
    //     {
    //         std::cout<<i<<" ";
    //     }
    // }
    // catch(EmptyContainer& e)
    // {
    //     std::cerr << e.what() << '\n';
    // }
    try
    {
        std::vector<Flight> vc = ReturnThresholdValue(flightData,23);
        std::cout<<"Threshold values: "<<"\n";
        for(auto ptr:vc)
        {
            std::cout<<ptr<<"\n";
        }
    }
    catch(EmptyContainer& e)
    {
        std::cerr << e.what() << '\n';
    }
    

    
    
}