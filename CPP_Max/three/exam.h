#ifndef EXAM_H
#define EXAM_H

#include<iostream>


enum examtype{
    TEST,MID,END
};

class exam
{
    protected:
    enum examtype ex;
    std::string examcode;
    int time;
    public:
        exam();
        exam(std::string,int);
        virtual void display()=0;

        enum examtype getEx() const { return ex; }
        void setEx(const enum examtype &ex_) { ex = ex_; }

        int getTime() const { return time; }
        void setTime(int time_) { time = time_; }

        std::string getExamcode() const { return examcode; }
        void setExamcode(const std::string &examcode_) { examcode = examcode_; }
};

#endif // EXAM_H
