#include<iostream>
#include"hospital.h"

hospital::hospital()
{
    hospital_id = "909";
    hospital_name = "Varaaha";
}

hospital::hospital(std::string i,std::string n):
    hospital_id(i),hospital_name(n)
{
}

void operator<<(std::ostream &os,hospital &h)
{
    os<<h.gethospitalId();
    os<<h.gethospitalName();
}

void hospital::accept()
{
    std::cout<<"enter hospital id: ";
    std::cin>>hospital_id;
    std::cout<<"enter hospital name: ";
    std::cin>>hospital_name;
    int ch;
    std::cout<<"Enter hospital rating: 0/Good 1/Average 2/Poor"<<"\n";
    std::cin>>ch;
    setHr((hospital_rating)ch);
}

void hospital::display()
{
    std::cout<<"Hospital id: "<<hospital_id<<"\n";
    std::cout<<"Hospital name: "<<hospital_name<<"\n";
}

// void hospital::printhospitals(hospital_rating hr)
// {
//     switch(hr)
//     {
//         case 0:
//             std::cout<<"Hospital Good will";
//             break;
//         case 1:
//             std::cout<<"Hospital Ahimsa";
//             break;
//         case 2:
//             std::cout<<"Hospital Surya";
//             break;
//     }
// }