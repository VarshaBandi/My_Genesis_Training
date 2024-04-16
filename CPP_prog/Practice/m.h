#ifndef HEADER_H
#define HEADER_H
#include<iostream>
#include<cstring>

class Student
{
    int rollno;
    char name[30];
    double marks;
    int sub[3];
    static int x;
public:
    // friend void operator<<(std::ostream &os,Student &s1)
    // {
    //     os<<s1.rollno;
    //     os<<s1.name;
    // }
    friend void operator <<(std::ostream &os,Student &s1);
    
    Student(int ,const char*,int[]);
    float calAvg();
    void accept();
    void display() const;
    Student();
    Student(int,const char*,double);

    int getRollno() const { return rollno; }
    void setRollno(int rollno_) { rollno = rollno_; }
    void setName(const char* nm)
    {
        strcpy(name,nm);
    }
    char* getName()
    {
        return name;
    }
    Student(int ,int []);

    double getMarks() const { return marks; }
    void setMarks(double m) { marks = m; }
    static void showx();

    
};

#endif // HEADER_H
