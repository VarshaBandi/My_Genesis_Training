#include<iostream>
#include"ex2.h"

int main()
{
    Account a;

    try
    {
        a.withdraw(6000);
        //std::cout<<a.withdraw(1000);
    }
    catch(lowbalexception l)
    {
        std::cout<<l.what()<<"\n";
    }
    catch(const std::exception& e)
    {
        std::cout<< e.what() << "\n";
    }
    
}