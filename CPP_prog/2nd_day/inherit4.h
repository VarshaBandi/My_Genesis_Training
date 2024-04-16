#include<iostream>

class Student
{
    public:
        Student();
        Student(int);
        virtual void labs(){}
        ~Student() {}
};

class Engineering:public Student
{
    public:
        Engineering();
        Engineering(int);
        ~Engineering(){}
        void labs();
        void design();
};

class Medical:public Student
{
    public:
        Medical();
        Medical(int);
        ~Medical(){}
        void labs();
        void treatment();
};