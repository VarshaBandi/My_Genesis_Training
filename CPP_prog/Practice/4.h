#ifndef HEADER_H
#define HEADER_H

#include<cstring>
class Student
{
private:
//instance fields/ non static fields //copy is created per object
    int rollno;
    char name[30];
    double marks;
    int sub[3];

    static int x;// only single copy exists

public:

    Student(int,const char *,int []);
  
    float calAvg();
    void accept();
    void display() const ;
    Student();// default constructor
    Student(int,const char *,double );// parameterised constructor

    int getRollno() const { return rollno; }
    void setRollno(int rollno_) { rollno = rollno_; }

    
   
    double getMarks() const { return marks; }
    void setMarks(double marks_) { marks = marks_; }

   static void showX();
};

#endif // HEADER_H
