#include<iostream>
#include<cstring>
#include"enum2.h"

week::week()
{
    we = THURSDAY;
}

week::week(enum weekdays w)
{
    we = w;
}

void week::accept()
{
    int n;
    std::cout<<"Enter: ";
    std::cin>>n;
    switch(n)
    {
        case 0:
            we = n;
            break;
        case 1:
            we = n;
            break;
        case 2:
            we = n;
            break;
        case 3:
            we = n;
            break;
        case 4:
            we = n;
            break;
        case 5:
            we = n;
            break;
        case 6:
            we = n;
            break;
    }   
}

void week::display()
{
    // std::cout<<"Enter: ";
    // std::cin>>we;
    switch(we)
    {
        case 0:
            std::cout<<"SUNDAY";
            break;
        case 1:
            std::cout<<"MONDAY";
            break;
        case 2:
            std::cout<<"TUESDAY";
            break;
        case 3:
            std::cout<<"WEDNESDAY";
            break;
        case 4:
            std::cout<<"THURSDAY";
            break;
        case 5:
            std::cout<<"FRIDAY";
            break;
        case 6:
            std::cout<<"SATURDAY";
            break;
    }
}