#include<iostream>
#include"vehicle.h"

void search(vehicle arr[],int c,int size)
{
    for(int i=0;i<size;i++)
    {
        if(c==arr[i].getChassisnumber())
        {
            std::cout<<"Details of the vehicle are: "<<"\n";
            std::cout<<"Chasis number: "<<arr[i].getChassisnumber()<<"\n";
            std::cout<<"Ex-showroom price"<<arr[i].getShowprice()<<"\n";
            std::cout<<"Tax: "<<arr[i].getTax()<<"\n";
            std::cout<<"Insurance amount: "<<arr[i].getInsuranceamount()<<"\n";
        }
    }
}
void catcar(car arr[],int size)
{
    int count=0,ch;
    std::cout<<"Enter your choice: 0/SUV 1/HatchBack 2/Sedan"<<"\n";
    std::cin>>ch;
    for(int i=0;i<size;i++)
    {
        if(arr[i].getC()==ch)
            count++;
    }
    std::cout<<"Count : "<<count<<"\n";
}

void catbike(bike arr[],int size)
{
    int count=0,ch;
    std::cout<<"Enter your choice: 0/Commute 1/Sports 2/Offroader"<<"\n";
    std::cin>>ch;
    for(int i=0;i<size;i++)
    {
        if(arr[i].getB()==ch)
            count++;
    }
    std::cout<<"Count : "<<count<<"\n";
}

void avgcatcar(car arr[],int size)
{
    int sum=0,count=0;
    float avg;
    for(int i=0;i<size;i++)
    {
        sum += arr[i].getShowprice();
        count++;
    }
    avg = sum/count;
    std::cout<<"Average is: "<<avg<<"\n";
}

void avgcatbike(bike arr[],int size)
{
    int sum=0,count=0;
    float avg;
    for(int i=0;i<size;i++)
    {
        sum += arr[i].getShowprice();
        count++;
    }
    avg = sum/count;
    std::cout<<"Average is: "<<avg<<"\n";
}

int main()
{
    int n,ch,cat1,cat2,choice;
    std::cout<<"Enter size: ";
    std::cin>>n;

  //  vehicle *arr = nullptr;
    std::cout<<"enter 4 for car and 2 for bike: ";
    std::cin>>choice;
        car *c1 = new car[n];
        for(int i=0;i<n;i++)
        {
            c1[i].accept();
        }
        catcar(c1,n);
        avgcatcar(c1,n);

        bike *b1 = new bike[n];
        for(int i=0;i<n;i++)
        {
            b1[i].accept();
        }
        catbike(b1,n);
        avgcatbike(b1,n);

    std::cout<<"enter chassis number to search: ";
    std::cin>>ch;
    search(c1,ch,n);

    delete c1,b1;
}