#include "exam.h"

Exam::Exam()
{ // default;
    ExamType=Exam_Category::END_SEM;
    examCode="19BTDFDF";
    timeDuration=60;
}

Exam::Exam(Exam_Category ExamType_, std::string examCode_, int timeDuration_)
{   // para
    ExamType=ExamType_;
    examCode=examCode_;
    timeDuration=timeDuration_;
}

Exam::~Exam()
{
    std::cout<<"Exam Destructor!!!"<<std::endl;
}

std::istream &operator>>(std::istream &is, Exam &e)
{
    std::cout<<"Enter the Exam Details !!!!"<<std::endl;
    std::cout<<"Enter the Exam Cateigry 0. UNIT_TEST  1.MID_TERM 3.END_SEM"<<std::endl;
    int choice;
    std::cin>>choice;
    e.ExamType=(Exam_Category)choice;
    std::cout<<"Enter the Exam Code"<<std::endl;
    std::cin>>e.examCode;
     std::cout<<"Enter the Exam Duration"<<std::endl;
    std::cin>>e.timeDuration;
    return is;
}