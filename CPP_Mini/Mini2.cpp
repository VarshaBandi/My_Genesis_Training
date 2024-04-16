#include<iostream>
#include"Mini2.h"
void displaying()
{
    std::cout<<"---Menu---"<<"\n";
    std::cout<<"1) Add record"<<"\n";
    std::cout<<"2) Show records"<<"\n";
    std::cout<<"3) Search record"<<"\n";
    std::cout<<"4) Count record"<<"\n";
}

void Insertrecord(Loan l[],int n)
{
    for(int i=0;i<n;i++)
    {
        l[i].accept();
    }
}

void Printrecord(Loan l[],int n)
{
    for(int i=0;i<n;i++)
    {
        l[i].display();
    }
}

void add(Loan l[],int n)
{
    l[n].accept();
}

void show(Loan l[],int n)
{
    for(int i=0;i<=n;i++)
    {
        l[i].display();
    }
}

void search(Loan l[],int n,int ln)
{
    int flag = 0;
    for(int i=0;i<=n;i++)
    {
        if(l[i].getloan()==ln)
        {
            flag = 1;
            std::cout<<"Record found"<<"\n";
            l[i].display();
            break;
        }
    }
    if(flag==0)
    {
        std::cout<<"No record found"<<"\n";
    }
}

void count(Loan l[],int n)
{
    int interest,va,res;
    char arr[10];
    for(int i=0;i<=n;i++)
    {
        if(l[i].getamount()<100000)
        {
            va = l[i].getinterest();
            res = va*2/100;
        }
        if(l[i].getamount()>100000 && l[i].getamount()<=500000)
        {
            va = l[i].getinterest();
            res = va*5/100;
        }
        if(l[i].getamount()>500000 && l[i].getamount()<=1500000)
        {
            va = l[i].getinterest();
            res = va*10/100;
            std::cout<<l[i].getname()<<"\n";
        }
    }
}
int main()
{
    // Loan lt;
    // std::cin>>lt;
    // std::cout<<lt;
    int n,ch,ln;
    std::cout<<"Enter n:"<<"\n";
    std::cin>>n;
    Loan *l = new Loan[5];
    Insertrecord(l,n);
    Printrecord(l,n);
    displaying();
    std::cout<<"Enter your choice: 1 / 2 / 3 / 4"<<"\n";
    std::cin>>ch;
    switch(ch)
    {
        case 1:
            add(l,n);
            break;
        case 2:
            show(l,n);
            break;
        case 3:
            std::cout<<"Enter a loan number to search: ";
            std::cin>>ln;
            search(l,n,ln);
            break;
        case 4:
            std::cout<<"Customer with highest loan interest amount is: ";
            count(l,n);
            break;
    }
}