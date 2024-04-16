#include<iostream>
#include<algorithm>

template<class T>
void mymin(T a,T b)
{
    std::cout<<std::min(a,b)<<"\n";
}

int main()
{
    int a = 5;
    int b = 10;
    //std::cout<<std::min(a,b)<<"\n";
    mymin(a,b);
}