#include<iostream>
#include"3s.h"
#include<cstring>

void Student::display
{
    std::cout<<"\n roll no= "<<rollno<<" Name= "<<name<< "marks= "<<marks;
}

Student::Student()
{
    std::cout<<" \n In Student() ctor";
    rollno=1;
    strcpy(name,"AAA");
    marks=90.55;
}

Student::Student(int r,const char *nm,double m):
    rollno(r),marks(m);
{
    std::cout<<"\n In Student() ctor";
    strcpy(name,nm);
}