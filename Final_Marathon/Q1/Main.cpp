#include"Functionalities.h"

int main()
{
    MyContainer data;
    CreateObjects(data);

    try
    {
        DisplayGreenPassCost(data,"101");
    }
    catch(EmptyContainerException& e)
    {
        std::cerr << e.what() << '\n';
    }

    try
    {
        AveragePrice(data);
    }
    catch(EmptyContainerException& e)
    {
        std::cerr << e.what() << '\n';
    }

    try
    {
        DisplayFindPrivilegeType(data);
    }
    catch(EmptyContainerException& e)
    {
        std::cerr << e.what() << '\n';
    }
    
    
}