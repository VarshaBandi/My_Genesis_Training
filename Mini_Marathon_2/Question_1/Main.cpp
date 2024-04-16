#include"functionalities.h"

int main()
{
    FnContainer fns;
    DataContainer data{"xyz","abcd","efghi"};

    try
    {
        CreateFunction(fns);
    }
    catch(EmptyContainer& e)
    {
        std::cerr << e.what() << '\n';
    }

    try
    {
        PerformOperation(fns,data);
    }
    catch(EmptyContainer& e)
    {
        std::cerr << e.what() << '\n';
    }
    
}

// auto AirPlaneInstances = [](FlightContainer &flightdata,FlightOperatorType type)
// {
//     for(auto ptr:flightdata)
//     {
//         if(ptr->flightType()==type)
//         {
//             std::cout<<ptr->flightType();
//         }
//     }
// };