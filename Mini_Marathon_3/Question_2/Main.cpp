#include"Func.h"

int main()
{
    Container data;
    MyContainer Mydata;

    CreateObjects(data);
    try
    {
        int ans = PrintTrainInstances(data);
        std::cout<<"Count of train instances are : "<<ans<<"\n";
    }
    catch(EmptyContainerException& e)
    {
        std::cerr << e.what() << '\n';
    }

    try
    {
        std::cout<<"Train Instances whose departure time is within 3 hours is: "<<"\n";
        DepartureTimeInstances(data,5);
    }
    catch(EmptyContainerException& e)
    {
        std::cerr << e.what() << '\n';
    }

    try
    {
        std::cout<<"Enter a value: ";
        int value;
        std::cin>>value;
        if(value==15 | value==16)
        {
            std::cout<<"Finding Train starting station---"<<"\n";
            std::optional<std::string> str = Trainstartingstation(data,value);
            if(str.has_value())
            {
                std::cout<<str.value()<<"\n";
            }
        }
        else{
            throw InvalidInputException("Invalid Input");
        }
    }
    catch(EmptyContainerException& e)
    {
        std::cerr << e.what() << '\n';
    }
    catch(InvalidInputException& e)
    {
        std::cerr << e.what() << '\n';
    }

    try
    {
        std::optional<int> result = TotalTicketPrice(data,"201");
        if(result.has_value())
        {
            std::cout<<"Total is: "<<result.value()<<"\n";
        }
    }
    catch(EmptyContainerException& e)
    {
        std::cerr << e.what() << '\n';
    }
    

}