#include<iostream>
#include<cstring>
#include"opeoverload.h"

oper::oper()
{
    id = 1;
    name = new char[20];
    strcpy(name,"Varshaaa");
    int n[3] = {67,45,90};
    for(int i=0;i<3;i++)
    {
        score[i]=n[i];
    }
}

oper::oper(int d,const char* n,int s[]):id(d)
{
    id = d;
    name = new char[strlen(n)+1];
    strcpy(name,n);
    for(int i=0;i<3;i++)
    {
        score[i]=s[i];
    }
}

void oper::accept()
{
    std::cout<<"Enter your id: ";
    std::cin>>id;
    std::cout<<"Enter your name: ";
    std::cin>>name;
    std::cout<<"Enter your scores:"<<"\n";
    for(int i=0;i<3;i++)
    {
        std::cin>>score[i];
    }
}

void oper::display()
{
    std::cout<<id<<"\n";
    std::cout<<name<<"\n";
    for(int i=0;i<3;i++)
    {
        std::cout<<score[i]<<"\t";
    }
}

float oper::calavg()
{
    int avg,sum=0;
    for(int i=0;i<3;i++)
    {
        sum += score[i];
    }
    avg = sum/3;
    return avg;
}

std::ostream& operator<<(std::ostream &os,oper &op)
{
    op.display();
    return os;
}

char& oper::operator[](int index)
{
    return name[index];
}

bool oper::operator<(oper &p2)
{
    int flag = 1;
    if(calavg()<p2.calavg())
        flag=0;
    return flag;
}

bool oper::operator==(oper &p2)
{
    int flag=1;
    if(strcmp(getname(),p2.getname())==0)
    {
        flag = 0;
    }
    return flag;
}