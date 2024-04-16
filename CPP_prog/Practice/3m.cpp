#include<iostream>
#include"3s.h"

int main()
{
    const Student s4;
    s4.display();
    Student *sptr1=new Student();
    sptr1->display();
    Student *sptr2=new Student(404,"Joy",66);
    sptr2->display();

    int n;
    std::cout<<"\n How many students ";
    std::cin>>n;
    Student *sp=new Student[n];

    Student sarr[3]={{101,"Navin",88},{102,"Jay",77},{103,"Anoop",66}};
    for(int i=0;i<3;i++)
    {
        sarr[i].display();
    }
    Student s1;
    s1.display();

    Student s2(22,"pppp",88);
    s2.display();
}
