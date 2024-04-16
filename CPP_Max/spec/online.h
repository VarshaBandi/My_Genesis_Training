#ifndef ONLINEEXAM_H
#define ONLINEEXAM_H

#include "Exam.h"
enum Exam_Plat{MEET,TEAMS,ZOOM};
class OnlineExam : public Exam{
    private:
        Exam_Plat Exam_Platform;


    public:
        OnlineExam();
        OnlineExam(Exam_Category ExamType_,std::string examCode_,int timeDuration_,Exam_Plat Exam_Platform_);
        OnlineExam(OnlineExam &oe);
        Exam_Plat examPlatform() const { return Exam_Platform; }
        void setExam_Platform(Exam_Plat &examPlatform) { Exam_Platform = examPlatform; } 
        void display();
        void Averagemarks(int arr[]);
        friend std::istream& operator>>(std::istream &is,OnlineExam &oe);
    

};

#endif // ONLINEEXAM_H