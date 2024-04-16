#include"Functionality.h"

int main()
{
    MyPriorityQueue data;
    CreateObjects(data);
    DisplayObjects(data);
    // std::priority_queue<ElectricVehicle> pq;
    // pq.push(Ev2Wheeler(12,VehicleType::REGULAR,234.0f,32,21, 500,ConnectedTechType::DIGITAL));
    // pq.push(Ev2Wheeler(13,VehicleType::REGULAR,234.0f,32,21, 500,ConnectedTechType::DIGITAL));
    // while(!pq.empty())
    // {
    //     std::cout<<pq.top()<<"\n";
    //     pq.pop();
    // }


    // std::promise<int> pr;
    // std::future<int> ft = pr.get_future();
    // std::future<std::optional<Epointer>> result = std::async(std::launch::async,DisplayAttributes,std::ref(data),std::ref(ft));
    // std::cout<<"Enter a value: ";
    // int value;
    // std::cin>>value;
    // pr.set_value(value);
    // std::optional<Epointer> res = result.get();

    // if(res.has_value())
    // std::cout<<"Attributes with given id are: "<<*(res.value())<<"\n";

    // DisplayAveragePrice(data);

    // Container cn = ReturnInstances(data,234.0f);
    // std::cout<<"Instances are: "<<"\n";
    // for(auto ptr:cn)
    // {
    //     std::cout<<*ptr<<"\n";
    // }

    // TotalGSTAmount(data);
    // TotalExchangeAmount(data);
}