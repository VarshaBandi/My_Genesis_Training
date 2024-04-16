#ifndef EXAM_H
#define EXAM_H

#include<iostream>
enum Exam_Category{UNIT_TEST,MID_TERM,END_SEM};
class Exam{
    private:
        std::string examCode;
        int timeDuration;
        Exam_Category ExamType;
    public:
        Exam();
        Exam(Exam_Category ExamType_,std::string examCode_,int timeDuration_);
        ~Exam();
        friend std::istream& operator>>(std::istream &is,Exam &e);

        virtual void display()=0;// virtal pure function
        Exam_Category examType()  { return ExamType; }
        void setExamType(const Exam_Category &examType) { ExamType = examType; }

        int getTimeDuration() const { return timeDuration; }
        void setTimeDuration(int timeDuration_) { timeDuration = timeDuration_; }

        std::string getExamCode() const { return examCode; }
        void setExamCode(const std::string &examCode_) { examCode = examCode_; }
};

#endif // EXAM_H