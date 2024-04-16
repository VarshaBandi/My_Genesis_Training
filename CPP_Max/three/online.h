#ifndef ONLINE_H
#define ONLINE_H

#include<iostream>
#include"exam.h"

enum exam_platform{
    MEET,TEAMS,ZOOM
};

class online:public exam
{
    enum exam_platform ep;
    int *marks[5];
    public:
        online();
        online(enum exam_platform);
        void display();
        void avg(int*,int n);
        friend void operator>>(std::istream& is,online &o);
        friend void operator<<(std::ostream& os,online &o);

        enum exam_platform getEp() const { return ep; }
        void setEp(const enum exam_platform &ep_) { ep = ep_; }
};

#endif // ONLINE_H
