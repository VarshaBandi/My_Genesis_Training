#include<iostream>
#include"m.h"

float maxAvg(Student s[],int n)
{
    float avg[3];
    for(int i=0;i<n;i++)
    {
        avg[i]=s[i].calAvg();
        //std::cout<<"\navg:"<<avg[i];
    }
    float max=avg[0];
    for(int i=1;i<n;i++)
    {
        if(avg[i]>max)
        max=avg[i];
    }
    return max;

}
int main()
{
    Student st(234,"Murali",456);
    std::cout<<st;
    std::cout<<"\n";
    // Student::showx();
    int m1[3]={44,55,66};
    int m2[3]={66,77,88};
    int m3[3]={88,99,33};
    Student savg[3]={{10,"murali",m1},{11,"suresh",m2},{13,"nivas",m3}};
    std::cout<<"max:"<<maxAvg(savg,3);
    Student *sp1=new Student(4,"varma",70);
    sp1->display();
    Student *sp2=new Student();
    sp2->display();
    Student sarr[3]={{1,"chandra",87},{2,"samba",89},{3,"chnadu",76}};
    for(int i=0;i<3;i++)
    {
        sarr[i].display();
    }
    
    // int n;
    // std::cout<<"\nenter num:"<<std::endl;
    // std::cin>>n;

    // Student *srr=new Student[n];
    // for(int i=0;i<n;i++)
    // {
    //     srr[i].accept();
    //     srr[i].display();
    // }

    // Student s;
    // s.display();
    // Student s1(2,"murali",80);
    // s1.display();
    // const Student s3(3,"Ravi",90);
    // s3.display();
    // s.setMarks(100);
    // std::cout<<"\n"<<s.getMarks();
    // s.display();
    

    return 0;
    
    
}