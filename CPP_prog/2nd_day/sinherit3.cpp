#include<iostream>
#include"inherit3.h"

Training::Training()
{
    std::cout<<"Base class default constructor is called"<<"\n";
}
Training::Training(int)
{
    std::cout<<"Base class para constructor is called"<<"\n";
}



online::online()
{
    std::cout<<"Online default constructor"<<"\n";
}
online::online(int)
{
    std::cout<<"Online para constructor"<<"\n";
}
void online::lectures()
{
    std::cout<<"Online teaching is going on"<<"\n";
}
void online::recordings()
{
    std::cout<<"Recordings are available"<<"\n";
}


offline::offline()
{
    std::cout<<"Offline default constructor"<<"\n";
}
offline::offline(int)
{
    std::cout<<"Offline para constructor"<<"\n";
}
void offline::lectures()
{
    std::cout<<"Offline teaching is going on"<<"\n";
}
void offline::oneonone()
{
    std::cout<<"One-on-one conversation happens"<<"\n";
}