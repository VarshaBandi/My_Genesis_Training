#include<iostream>
#include<cstring>
#include"Mini.h"
void calculateFine(Book b[])
{
    int fine;
    for(int i=0;i<3;i++)
    {
        if(b[i].getdays()>=10 && b[i].getdays()<=20)
        {
            fine = 100;
            b[i].display();
            std::cout<<"Fine: "<<fine<<"\n";
        }
        if(b[i].getdays()>=20 && b[i].getdays()<=30)
        {
            fine = 200;
            b[i].display();
            std::cout<<"Fine: "<<fine<<"\n";
        }
        if(b[i].getdays()>=30 && b[i].getdays()<=40)
        {
            fine = 200;
            b[i].display();
            std::cout<<"Fine: "<<fine<<"\n";
        }
        if(b[i].getdays()>40)
        {
            fine = 500;
            b[i].display();
            std::cout<<"Fine: "<<fine<<"\n";
        }
        std::cout<<"\n";
    }
}

void showprice(Book b[])
{
    for(int i=0;i<3;i++)
    {
        if(b[i].getPrice()<2500)
        {
            std::cout<<b[i].getname()<<"\n";
        }
    }
}

void showauthor(Book b[])
{   
    char* s;
    for(int i=0;i<3;i++)
    {
        strcpy(s,b[i].getaname());
        if(s[0]=='A')
        {
            std::cout<<b[i].getname()<<"\n";
        }
    }
}

int main()
{
    Book *b = new Book[3];
    for(int i=0;i<3;i++)
    {
        b[i].accept();
    }

    for(int i=0;i<3;i++)
    {
        b[i].display();
    }

    std::cout<<"Calculating starts-------------------------"<<"\n";
    calculateFine(b);
    std::cout<<"\n";
    std::cout<<"Showing books whose author name start with 'A' are:"<<"\n";
    showauthor(b);
    std::cout<<"Showing books whose price is less than 2500 Rs. are:"<<"\n";
    showprice(b);
}