#include<iostream>
#include<cstring>
#include"user.h"

User::User()
{
    id = "1";
    username = "Varsha_B";
    department = "IT";
}

User::User(std::string s,std::string t,std::string u):
    id(s),username(t),department(u)
{
   
}

void operator>>(std::istream &is,User &us)
{
    is>>us.id;
    is>>us.username;
    is>>us.department;
}

bool User::operator==(User &p2)
{
    return this->getDepartment()==p2.getDepartment();
}

void User::accept()
{
    std::cout<<"Enter id: ";
    std::cin>>id;
    std::cout<<"Enter username: ";
    std::cin>>username;
    std::cout<<"Enter department: ";
    std::cin>>department;
}