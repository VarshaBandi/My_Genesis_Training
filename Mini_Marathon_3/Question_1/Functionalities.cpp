//Functionalities.cpp file contains: 

#include"Functionalities.h"
std::mutex mt;
void printsum(int input)
{
    mt.lock();
    std::cout<<"Printing sum of first N numbers: "<<"\n";
    for(int i=1;i<=input;i++)
    {
        std::cout<<i<<" ";
    }
    std::cout<<"\n";
    mt.unlock();
}

void Displayeven(std::vector<int> &data)
{
    mt.lock();
    std::cout<<"Printing even numbers: "<<"\n";
    for(auto val:data)
    {
        if(val%2==0)
        {
            std::cout<<val<<" ";
        }
    }
    std::cout<<"\n";
    mt.unlock();
}

std::vector<int> GenerateN(std::future<int> &ft)
{
    int N = ft.get();
    std::cout<<"Generating array:"<<"\n";
    std::vector<int> result;
    for(int i=1;i<=5;i++)
    {
        result.emplace_back(N);
        N++;
    }
    return result;
}

void SquareNumbers(std::vector<int> &data)
{
    mt.lock();
    std::cout<<"Printing Square numbers: "<<"\n";
    for(auto val:data)
    {
        std::cout<<val*val<<" ";
    }
    std::cout<<"\n";
    mt.unlock();
}

void CubeNumbers(std::vector<int> &data)
{
    mt.lock();
    std::cout<<"Printing Cube numbers: "<<"\n";
    for(auto val:data)
    {
        std::cout<<val*val*val<<" ";
    }
    std::cout<<"\n";
    mt.unlock();
}

