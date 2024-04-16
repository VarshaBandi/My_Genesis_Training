#include<iostream>
#include"user.h"

void search(User arr[],std::string d)
{
    int count=0,flag=0;
    for(int i=0;i<3;i++)
    {
        if(d==arr[i].getDepartment())
        {
            flag = 1;
            count++;
            std::cout<<"User found"<<"\n";
            std::cout<<"Details of user are:"<<"\n";
            std::cout<<arr[i].getId()<<"\n";
            std::cout<<arr[i].getUsername()<<"\n";
            std::cout<<arr[i].getDepartment()<<"\n";
        }
    }
    if(flag=0)
    {
        throw "User not found with given department";
    }
    std::cout<<"Count: "<<count<<"\n";
}

int main()
{
    User *arr = new User[3];
    std::cout<<"Enter user details: "<<"\n";
    for(int i=0;i<3;i++)
    {
        arr[i].accept();
    }
    std::string dep;
    std::cout<<"Enter department name: ";
    std::cin>>dep;
    try
    {
        search(arr,dep);
    }
    catch(const char* msg)
    {
        std::cout <<msg<< "\n";
    }
    User p1("28","Bandi","IT");
    User p2("32","Riya","CSE");
    bool p = p1==p2;
    if(p)
    {
        std::cout<<"Both departments are same"<<"\n";
    }
    else
    {
        std::cout<<"Departments are not equal"<<"\n";
    }

    User st;
    std::cin>>st;
}