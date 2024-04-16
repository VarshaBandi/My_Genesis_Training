#include"Fun.h"

int main()
{
    Container data;
    CreateObjects(data);
    std::array<std::thread,3>arr;

    try
    {
        std::string str = "25";
        std::thread t1(CountInstances,std::ref(data),std::ref(str));
        t1.join();
    }
    catch(EmptyContainerException& e)
    {
        std::cerr << e.what() << '\n';
    }
    std::cout<<"--------------------------------"<<"\n";

    try
    {
        std::thread t2(CheckEmployeeInstances,std::ref(data),300);
        t2.join();
    }
    catch(EmptyContainerException& e)
    {
        std::cerr << e.what() << '\n';
    }
    std::cout<<"--------------------------------"<<"\n";

    try
    {
        std::promise<int> pr;
        std::future<int> ft = pr.get_future();
        std::thread t3(InstancesTaxPercent,std::ref(data),std::ref(ft));
        std::cout<<"Enter a value: ";
        int value;
        std::cin>>value;
        pr.set_value(value);
        t3.join();
    }
    catch(EmptyContainerException& e)
    {
        std::cerr << e.what() << '\n';
    }
    std::cout<<"--------------------------------"<<"\n";

    std::string val = "25";
    auto MyFun = std::bind(CountInstances,std::ref(data),std::ref(val));

    MyFun(data,"23","27");

}