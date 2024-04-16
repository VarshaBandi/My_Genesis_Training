#include<iostream>
#include<cstring>

enum weekdays
{
    SUNDAY,MONDAY,TUESDAY,WEDNESDAY,THURSDAY,FRIDAY,SATURDAY
};

class week
{
    int we;
    enum weekdays w;
    public:
        void accept();
        void display();
        week();
        week(enum weekdays);
};