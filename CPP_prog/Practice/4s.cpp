#include<iostream>
#include<cstring>
#include"4.h"

int Student::x=10;

// returntype  classname::funname(){   }

void Student::accept()
{

}

void Student::display()const
{
    std::cout<<"\n rollno ="<<rollno<<" Name ="<<name<<" marks ="<<marks;
}
Student::Student()
{
    std::cout<<"\n In Student() ctor ";
    rollno=1;
    strcpy(name,"AAA");
    marks=90.55;
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
// r , nm , m are local variables
Student::Student(int r,const char *nm,double m):
     rollno(r),marks(m)
{
    std::cout<<"\n In para Student() ctor ";
    strcpy(name,nm);
  
}

void Student::showX()// can access static members only
{
    std::cout<<" \n x= "<<x;
    // this pointer is never passed to static functions
    //rollno=9;
}
