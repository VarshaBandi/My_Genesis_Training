#include<iostream>

void fun(int &a)
{
    a=100;
}

int main()
{
    int y=20;
    fun(y);
    std::cout<<y<<std::endl;
}