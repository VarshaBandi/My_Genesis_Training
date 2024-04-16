#include<iostream>
#include<algorithm>

template<class T>
void mymax(T a,T b)
{
    std::cout<<std::max(a,b)<<"\n";
}

int main()
{
    int a = 5;
    int b = 10;
    //std::cout<<std::min(a,b)<<"\n";
    mymax(a,b);
}