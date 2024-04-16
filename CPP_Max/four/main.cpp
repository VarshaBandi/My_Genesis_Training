#include<iostream>
#include"hospital.h"
#include"doctor.h"

void searchhospital(doctor dc[],std::string s,int n)
{
    for(int i=0;i<n;i++)
    {
        if(dc[i].getdoctorName()==s)
        {
            std::cout<<dc[i].getregisteredHospitalName()<<"\n";
        }
    }
}

void calculatetax(doctor dc[],int n2)
{
    int high = 0,tax;
    for(int i=0;i<n2;i++)
    {
        if(dc[i].getdoctorFees()>high)
        {
            high = dc[i].getdoctorFees();
            tax = high*100;
        }
    }
    std::cout<<"Doctor with highest fees is "<<high<<" with tax amount of "<<tax<<"\n";
}

void printhospitals(hospital hospital_arr[],int r)
{
    for(int i=0;i<3;i++)
    {
        if(hospital_arr[i].getHr()==r)
        {
            std::cout<<hospital_arr[i].gethospitalName();
        }
    }
}

int main()
{
    int n1;
    std::cout<<"Enter n: ";
    std::cin>>n1;
    hospital *hospital_arr = new hospital[n1];
    for(int i=0;i<n1;i++)
    {
        hospital_arr[i].accept();
    }
    int n2;
    std::cout<<"Enter n2: ";
    std::cin>>n2;
    doctor *dc = new doctor[n2];
    for(int i=0;i<n2;i++)
    {
        dc[i].accept();
    }
    
    //dc[n2].calculatetax();
    calculatetax(dc,n2);

    std::string dcname;
    std::cout<<"Enter a doctor name: ";
    std::cin>>dcname;
    searchhospital(dc,dcname,n2);

    int rating;
    std::cout<<"Enter a rating: 0/Good 1/Average 2/Poor"<<"\n";
    std::cin>>rating;
    //hospital_rating r = static_cast<hospital_rating>(rating);
    printhospitals(hospital_arr,rating);
}
