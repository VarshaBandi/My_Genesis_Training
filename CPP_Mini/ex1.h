#include<iostream>

class exm
{
    int id;
    char* name[20];
    int score[3];

    public:
        exm();
        exm(int,const char*,int);
        void accept();
        void display();
        avgcal();
};