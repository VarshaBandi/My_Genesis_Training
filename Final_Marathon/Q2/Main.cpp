#include"Func.h"

int main()
{
    MapContainer data;
    CreateObjects(data);
    std::list<std::string>Mylist{"A0","A5","A1"};

    try
    {
        MapContainer res =  ReturnNVehicleInstances(data,3);
        std::cout<<"Returning last N Instances of Vehicle: "<<"\n";
        for(auto [k,v]:res)
        {
            std::cout<<*v<<"\n";
        }
    }
    catch(EmptyContainerException& e)
    {
        std::cerr << e.what() << '\n';
    }
    std::cout<<"------------------------------"<<"\n";

    try
    {
        std::unordered_map<std::string,std::string> res =  ReturnPairList(data,Mylist);
        std::cout<<"Key value pairs which matches with given list of Ids are: "<<"\n";
        for(auto [k,v]:res)
        {
            std::cout<<k<<" "<<v<<"\n";
        }
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

    try
    {
        std::string str = MatchServiceID(data,"201");
        std::cout<<"The Vehicle ID that matches with given service Id is : "<<str<<"\n";
    }
    catch(EmptyContainerException& e)
    {
        std::cerr << e.what() << '\n';
    }
    std::cout<<"------------------------------"<<"\n";

    try
    {
        float ans = AverageCharges(data);
        std::cout<<"Average Charges of ServiceRecord Instances is: "<<ans<<"\n";
    }
    catch(EmptyContainerException& e)
    {
        std::cerr << e.what() << '\n';
    }
    std::cout<<"------------------------------"<<"\n";
    try
    {
        std::unordered_map<std::string,std::string> Mymap = KeyValuePair(data);
        std::cout<<"Pair of instance which has maximum service charge is: "<<"\n";
        for(auto [k,v]:Mymap)
        {
            std::cout<<k<<" "<<v<<"\n";
        }
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    
    
}