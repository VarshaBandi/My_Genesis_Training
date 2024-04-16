#include<iostream>
#include<cstring>

class overException:public std::exception
{
    char msg[50];
    public:
    // char msg[50];
    overException()
    {
        strcpy(msg,"Stack overflow");
    }
    overException(const char * s)
    {
        strcpy(msg,s);
    }
    char *what()
    {
        return msg;
    }
};

class underException:public std::exception
{
    char msg[50];
    public:
    // char msg[50];
    underException()
    {
        strcpy(msg,"Stack underflow");
    }
    underException(const char * s)
    {
        strcpy(msg,s);
    }
    char *what()
    {
        return msg;
    }
};

class stack
{
    int top;
    int size;
    int *arr;
    public:
        stack();
        stack(int,int);
        ~stack();
        void push(int);
        int pop();
        int peek();
        bool isFull();
        bool isEmpty();
};