#include "OnlineExam.h"
#include "OfflineExam.h"
int main(int argc, char const *argv[])
{
    int n;
    std::cout<<"Enter the no of Online Exam Objects"<<std::endl;
    std::cin>>n;
    OnlineExam oexam[n];
    // taking  input for online 
    for(int i=0;i<n;i++){
        std::cin>>oexam[i];
    }
    for(int i=0;i<n;i++){
        oexam[i].display();
    }
    std::cout<<"Enter the no of Offline Exam Objects"<<std::endl;
    int num;
    std::cin>>num;
    OfflineExam fexam[num];
    // taking  input for offline 
    for(int i=0;i<num;i++){
        std::cin>>fexam[i];
    }
    for(int i=0;i<num;i++){
        fexam[i].display();
    }

    return 0;
}