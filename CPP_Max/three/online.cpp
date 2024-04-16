#include<iostream>
#include"online.h"

online::online()
{
    //std::cout<<"Default";
    examcode="9007";
}
online::online(enum exam_platform e):
    ep(e)
{
}
void online::avg(int* a,int n)
{
    int sum = 0,avg;
    for(int i=0;i<n;i++)
    {
        sum += a[i];
    }
    avg = sum/n;
    std::cout<<"Average: "<<avg<<"\n";
}

void operator>>(std::istream& is,online &o)
{
    o.getEp();
}
void operator<<(std::ostream& os,online &o)
{
    o.getEp();
}
void online::display()
{
    std::cout<<getExamcode();
}