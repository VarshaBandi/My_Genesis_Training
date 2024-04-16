#include"ThreadHandler.h"

std::ostream &operator<<(std::ostream &os, const ThreadHandler &rhs) {
      os << " _value: " << rhs._value;
    return os;
}
void ThreadHandler::Operation()
{
    std::unique_lock<std::mutex>ul(mt);
    cv.wait(ul,[&](){return _square_val_available;});
    std::cout<<"Square of values are: "<<"\n";
    for(auto& i:vec)
    {
        i = i*i;
        std::cout<<i<<" ";
    }
}

void ThreadHandler::InputCapture()
{
    for(int i=0;i<_value;i++)
    {
        std::cout<<"Enter a value: ";
        std::cin>>_square_val;
        vec.emplace_back(_square_val);
    }
    _square_val_available = true;
    cv.notify_one();
}