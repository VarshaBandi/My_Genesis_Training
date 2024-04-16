#include<iostream>
#include"doctor.h"

doctor::doctor()
{
    doctor_id = "781";
    doctor_name = "Varsha";
    doctor_speciality = "Neurosurgeon";
    registered_hospital_name = "Ahimsa Hospital";
    doctor_fees = 500;
}

doctor::doctor(std::string a,std::string b,std::string c,std::string d,float f):
    doctor_id(a),doctor_name(b),doctor_speciality(c),registered_hospital_name(d),doctor_fees(f)
{
}

void operator<<(std::ostream &os,doctor &d)
{
    os<<d.getdoctorId();
    os<<d.getdoctorName();
    os<<d.getdoctorSpeciality();
    os<<d.getdoctorSpeciality();
}

void doctor::accept()
{
    std::cout<<"enter doctor id: ";
    std::cin>>doctor_id;
    std::cout<<"enter doctor name: ";
    std::cin>>doctor_name;
    std::cout<<"enter doctor speciality: ";
    std::cin>>doctor_speciality;
    std::cout<<"enter registered hospital name: ";
    std::cin>>registered_hospital_name;
    std::cout<<"enter doctor fees: ";
    std::cin>>doctor_fees;
}

void doctor::display()
{
    std::cout<<"Doctor id: "<<doctor_id<<"\n";
    std::cout<<"Doctor name: "<<doctor_name<<"\n";
    std::cout<<"Doctor speciality: "<<doctor_speciality<<"\n";
    std::cout<<"Registered hospital name: "<<registered_hospital_name<<"\n";
    std::cout<<"Doctor fees: "<<doctor_fees<<"\n";
}

void doctor::calculatetax()
{
    std::cout<<doctor_fees;
}
