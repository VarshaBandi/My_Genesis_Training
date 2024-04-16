#include<iostream>
#include"inherit4.h"

Student::Student()
{
    std::cout<<"Base class default constructor is called"<<"\n";
}
Student::Student(int)
{
    std::cout<<"Base class para constructor is called"<<"\n";
}



Engineering::Engineering()
{
    std::cout<<"Engineering default constructor"<<"\n";
}
Engineering::Engineering(int)
{
    std::cout<<"Engineering para constructor"<<"\n";
}
void Engineering::labs()
{
    std::cout<<"Engineering labs are going on"<<"\n";
}
void Engineering::design()
{
    std::cout<<"design is available"<<"\n";
}


Medical::Medical()
{
    std::cout<<"Medical default constructor"<<"\n";
}
Medical::Medical(int)
{
    std::cout<<"Medical para constructor"<<"\n";
}
void Medical::labs()
{
    std::cout<<"Medical labs are going on"<<"\n";
}
void Medical::treatment()
{
    std::cout<<"treatment happens"<<"\n";
}