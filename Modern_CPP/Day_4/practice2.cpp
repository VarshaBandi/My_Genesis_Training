#include<iostream>
#include<string.h>

void print(auto name)
{
    std::cout<<typeid(name).name()<<std::endl;
}

void display(auto ptr)
{
    std::cout<<typeid(ptr).name();
}
int main()
{
    const char name[4][9] = {"Sikander","Vijay","Ravi","yogesh"};
    const char *ptr[4] = {"Varsha","Bhagya","Murali","Varma"};
    const int *p1;
    std::cout<<typeid(p1).name()<<std::endl;
    char *const p2="varsh";
    std::cout<<typeid(p2).name()<<std::endl;
    
    // print(name);
    // display(ptr);

}