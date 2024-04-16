#include<iostream>
#include<cstring>
#include"m.h"
int Student::x=10;
void operator <<(std::ostream &os,Student &s1)
{
    os<<s1.rollno;
    os<<" "<<s1.name;
}

Student::Student(int r, const char *nm, int s[])
{
    rollno=r;
    strcpy(name,nm);
    for(int i=0;i<3;i++)
    {
        sub[i]=s[i];
    }
}

float Student::calAvg()
{
    int sum=0;
    for(int i=0;i<3;i++)
    {
        sum+=sub[i];

    }
    return sum/3.0f;
}

void Student::accept()
{
        std::cout<<"\nenter roll no:";
        std::cin>>rollno;   
        std::cout<<"\nenter name:" ;
        std::cin>>name;
        std::cout<<"\nenter marks:";
        std::cin>>marks;
}

void Student::display() const
{
    std::cout<<"\n rollno:"<<rollno<<" name:"<<name<<" marks:"<<marks;
}

Student::Student()
{
    rollno=1;
    strcpy(name,"varsha");
    marks=88;
}

Student::Student(int r, const char *nm, double m):
    rollno(r),marks(m)
{
    strcpy(name,nm);
}

Student::Student(int r, int m[])
{
    rollno=r;
    for(int i=0;i<3;i++)
    {
        sub[i]=m[i];
    }

}

void Student::showx()
{
    std::cout<<x;
}
