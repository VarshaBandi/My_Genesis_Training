#include<iostream>

enum COLOURS
{
    RED,BLUE,GREEN
};

class Col
{
    //char* c;
    char name[30];
    enum COLOURS c;

    public:
        void accept();
        void display();
        Col();
        Col(const char*,enum COLOURS);
};

