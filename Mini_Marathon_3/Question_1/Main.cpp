#include"Functionalities.h"

int main()
{
    std::promise<int> pr;
    std::future<int> ft = pr.get_future();
    std::future<std::vector<int>> result = std::async(std::launch::async,GenerateN,std::ref(ft));
    std::cout<<"Enter a value: ";
    int value;
    std::cin>>value;
    pr.set_value(value);
    for(auto val:result.get())
    {
        std::cout<<val<<" ";
    }
    std::cout<<"\n";

    // std::thread t1(printsum,5);
    std::vector<int> data{1,2,3,4,5};
    std::array<int,5> arr{6,7,8,9,10};

    std::array<std::thread, 4> threads = {
    std::thread(printsum,5),
    std::thread(Displayeven,std::ref(data)),
    std::thread(SquareNumbers,std::ref(data)),
    std::thread(CubeNumbers, std::ref(data))
     };

    // std::array<std::thread,4>threads;
    // threads[0]=std::thread(printsum,5);
    // threads[1]=std::thread(Displayeven,std::ref(data));
    // threads[2]=std::thread(SquareNumbers,std::ref(data));
    // threads[3]=std::thread(CubeNumbers,std::ref(data));

    // std::array<std::thread,4>threads;
    // threads[0]=std::thread(printsum,5);
    // threads[1]=std::thread(Displayeven,std::ref(arr));
    // threads[2]=std::thread(SquareNumbers,std::ref(arr));
    // threads[3]=std::thread(CubeNumbers,std::ref(arr));

    for (auto& thread : threads) {
        thread.join();
    }
}
