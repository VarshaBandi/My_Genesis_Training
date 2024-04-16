#include<iostream>
#include"book.h"

Book::Book()
{
    name = new char[strlen("Harry Potter")+1];
    strcpy(name,"Harry Potter");
    price=1099;
}

Book::Book(const char* n, double p)
    :price(p)
{
    name = new char[strlen(n)+1];
    strcpy(name,n);
    price=p;
}

Book::~Book()
{
    std::cout<<"\nDestructor is called"<<"\n";
    delete name;
}

void Book::accept()
{
    std::cout<<"Enter the name of the book: "<<"\n";
    std::cin>>name;
    std::cout<<"Enter the price of the book:"<<"\n";
    std::cin>>price;
}

void Book::display()
{
    std::cout<<"Name: "<<name<<", Price: "<<price<<"\n";
}

void operator<<(std::ostream &os,Book &s)
{
    os<<s.name;
    os<<s.price;
}
