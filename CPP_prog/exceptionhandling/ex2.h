#include<iostream>
#include<cstring>

class lowbalexception:public std::exception
{
    char msg[50];
    public:
        lowbalexception()
        {
            std::cout<<"Your balance is low"<<"\n";
        }
        lowbalexception(const char * s)
        {
            strcpy(msg,s);
        }
        char* what()
        {
            return msg;
        }
};

class Account
{
    int balance;
    public:
        Account();
        Account(int);
        int withdraw(int);
};