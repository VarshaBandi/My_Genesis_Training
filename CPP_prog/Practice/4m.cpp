#include<iostream>
#include"4.h"
//every non static member function has [this] pointer

void search(Student s[],int r)
{


}
float maxAvg(Student s[],int size)
{    
    float avg[size];
    for(int i=0;i<size;i++)
    {
        avg[i]=s[i].calAvg();
        std::cout<<" avg[i]  = "<<avg[i];
    }
    float max=avg[0];
     for(int i=1;i<size;i++)
     {
        if(avg[i]>max)
           max=avg[i];
     }     
    return max;
}
int main()
{

Student *sp=new Student;
Student *sp1=new Student[10];


delete sp;//to avoid memory leakage 
delete []sp1;//to avoid memory leakage

int m1[3]={44,55,66};
int m2[3]={33,32,35};
int m3[3]={99,98,87};
int m4[3]={66,67,68};
Student s[4]={{1,"Yash",m1},{2,"Jay",m2},{3,"rr",m3},{4,"Tina",m4}};
std::cout<<"Maximum avg = "<<maxAvg(s,4)<<std::endl;


    //***non static member function can be called by object only 

   // Student::showX();


//     const Student s4;
//     s4.display();//constant objects can call constant member funs only   
//     Student *sptr1= new Student();
//     sptr1->display();
//     Student *sptr2= new Student(404,"Joy",66);
//     sptr2->display();

//     int n;
//     std::cout<<"\n How many students ";
//     std::cin>>n;
//     Student * sp =new Student[n];


    Student sarr[3]={{101,"Navin",88},{102,"Jay",77},{103,"Anup",66} };
    for(int i=0;i<3;i++)
    {
       // sarr[i].accept();
        sarr[i].display();
    }
    search(sarr,102);

// //non constant objects - can call any member funs
//     Student s1;// object of Student class/ s1 is an instance of a class
//     s1.display();
//     Student s2(2,"Yash",88);
//     s2.display();

//     s2.setMarks(94);
//     std::cout<<"\n updated marks = "<<s2.getMarks();


    /*
    -allocate memory
    - constructor is called 
    - initialize data members of that object 
    */
    //std::cout<<sizeof(Student);

}