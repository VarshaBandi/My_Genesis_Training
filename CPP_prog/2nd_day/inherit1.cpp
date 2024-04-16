#include<iostream>
#include"inherit1.h"

int main()
{
    // Vehicle ve;
    // ve.drive();
    Vehicle t1(3,"Bandi");
    TwoWheeler t2(23,"Varsha",t1);
    std::cout<<t2;

    // int ch;
    // std::cout<<"Enter the type of vehicle( 2 for TwoWheeler / 4 for FourWheeler)"<<"\n";
    // std::cin>>ch;

    // Vehicle *v = nullptr;

    // if(ch==2)
    // {
    //     v = new TwoWheeler();
    // }
    // else if(ch==4)
    // {
    //     v = new FourWheeler();
    // }
    // else
    // {
    //     std::cout<<"Invalid choice"<<"\n";
    // }

    // v->drive();

    // FourWheeler *f = dynamic_cast<FourWheeler*>(v);
    // if(f!=0)
    // {
    //     f->AC();
    // }
    // else
    // {
    //     std::cout<<"Failed to cast to four wheeler"<<"\n";
    // }

    //delete v,f;
}
