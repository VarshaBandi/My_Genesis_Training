#include "Func.h"

void CreateObjects(Container &data)
{
    data.emplace_back(std::make_shared<Train>("101","Pune","Hyderabad",6,30,std::make_shared<TrainTicket>(256,TicketType::GENERAL,TicketClass::AC)));
    data.emplace_back(std::make_shared<Train>("201","Mumbai","Hyderabad",2,50,std::make_shared<TrainTicket>(500,TicketType::RESERVED,TicketClass::AC)));
    data.emplace_back(std::make_shared<Train>("301","andhara","Hyderabad",15,30,std::make_shared<TrainTicket>(1256,TicketType::WAITING,TicketClass::FIRST)));
    data.emplace_back(std::make_shared<Train>("401","Pune","Maharastra",16,10,std::make_shared<TrainTicket>(2056,TicketType::GENERAL,TicketClass::SECOND)));
}

void DepartureTimeInstances(Container &data, int value)
{
    if(data.empty())
    {
        throw EmptyContainerException("Data is empty!");
    }
    for(auto ptr:data)
    {
        if((ptr->trainDepartureHour()+1)==value || (ptr->trainDepartureHour()+2)==value ||(ptr->trainDepartureHour()+3)==value)
        {
            std::cout<<*ptr<<"\n";
        }
    }
}

std::optional<std::string> Trainstartingstation(Container &data,int value)
{
    if(data.empty())
    {
        throw EmptyContainerException("Data is empty!");
    }
    int total = 0;
    for(auto ptr:data)
    {
        if(ptr->trainNumber()=="401")
        {
            total+= ptr->bookedTickets()->ticketPrice();
        }
    }
    std::string str{"Default"};
    for(auto ptr:data)
    {
        if(ptr->trainDepartureHour()==value && total>=2000)
        {
            str =  ptr->trainStartingStation();
        }
    }
    if(str=="Default")
    {
        std::nullopt;
    }
    return str;
}

int PrintTrainInstances(Container &data)
{
    if(data.empty())
    {
        throw EmptyContainerException("Data is empty!");
    }
    int count = 0;
    for(auto ptr:data)
    {
        if(ptr->trainDepartureHour()>3)
        {
            count++;
        }
    }
    return count;
}



std::optional<int> TotalTicketPrice(Container &data,std::string str)
{
    if(data.empty())
    {
        throw EmptyContainerException("Data is empty!");
    }
    int total = 0;
    for(auto ptr:data)
    {
        if(ptr->trainNumber()==str)
        {
            total+= ptr->trainDepartureMinute();
        }
    }
    if(total == 0)
    {
        std::nullopt;
    }
    return total;
}
