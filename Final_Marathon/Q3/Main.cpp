#include"ThreadHandler.h"

int main()
{
    ThreadHandler obj1(5);
    std::thread t1(&ThreadHandler::Operation,&obj1);
    std::thread t2(&ThreadHandler::InputCapture,&obj1);

    if(t1.joinable())
    {
        t1.join();
    }
    if(t2.joinable())
    {
        t2.join();
    }

}
