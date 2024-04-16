#include<iostream>
#include"Mini3.h"
#include<cstring>

Player::Player()
{
    playerid = 28;
    strcpy(pname,"Varsha");
}

Player::Player(int id)
{
    playerid = id;
}

void operator<<(std::ostream &os,int &d)
{
    os<<d.playerid;
}

void operator++()
{
    *this++;
    return this;
}

Player operator++(int val)
{
    Player py=++val;
    ++val;
    return val;
}

void Player::accept()
{
    int sum = 0,avg;
    std::cout<<"Enter the player name: ";
    std::cin>>pname;
    std::cout<<"enter player id: ";
    std::cin>>playerid;
    std::cout<<"Enter the scores: "; 
    for(int i=0;i<3;i++)
    {
        std::cin>>arr[i];
        sum += arr[i];
    }
    avg = sum/3;
}

void Player::display()
{
    std::cout<<"Name: "<<pname;
    std::cout<<"Playerid: "<<playerid;
    std::cout<<"Scores: "<<"\n";
    for(int i=0;i<3;i++)
    {
        std::cout<<arr[i];
    }
}