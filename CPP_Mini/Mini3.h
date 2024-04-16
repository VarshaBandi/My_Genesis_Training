#ifndef MINI3_H
#define MINI3_H

#include<iostream>

class Player
{
    int playerid;
    char* pname;
    int arr[3];
    int avg[3];

    public:
        Player();
        Player(int);
        void accept();
        void display();
        Player(Player &p)
        {
            playerid = p;
        }
        char* getname()
        {
            return pname;
        }
        friend void operator<<(std::ostream &os,int &d);

        friend void operator++();
        friend void operator++(int val);

        int getPlayerid() const { return playerid; }
        void setPlayerid(int playerid_) { playerid = playerid_; }
        
};

#endif // MINI3_H
