#ifndef INC_3S_H
#define INC_3S_H

class Student
{
    private:

        int rollno;
        char name[30];
        double marks;

    public:
        void accept();
        void display();
        Student();
        Student(int,const char*,double);

        int getRollno() const { return rollno; }
        void setRollno(int rollno_) { rollno = rollno_; }

        char getName() const { return name; }
        void setName(char name_) { name = name_; }

        double getMarks() const { return marks; }
        void setMarks(double marks_) { marks = marks_; }
}

#endif // INC_3S_H
