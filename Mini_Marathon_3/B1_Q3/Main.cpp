#include"Functionality.h"

int main()
{
    Container data;
    CreateObjects(data);

    std::promise<int> pr;
    std::future<int> ft = pr.get_future();
    std::future<std::optional<Epointer>> result = std::async(std::launch::async,DisplayAttributes,std::ref(data),std::ref(ft));
    std::cout<<"Enter a value: ";
    int value;
    std::cin>>value;
    pr.set_value(value);
    std::optional<Epointer> res = result.get();

    if(res.has_value())
    std::cout<<"Attributes with given id are: "<<*(res.value())<<"\n";

    DisplayAveragePrice(data);

    Container cn = ReturnInstances(data,234.0f);
    std::cout<<"Instances are: "<<"\n";
    for(auto ptr:cn)
    {
        std::cout<<*ptr<<"\n";
    }

    TotalGSTAmount(data);
    TotalExchangeAmount(data);
}