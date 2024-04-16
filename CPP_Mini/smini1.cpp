#include<iostream>
#include<cstring>
#include"Mini.h"
Book::Book()
{
    strcpy(bookname,"Harry Potter");
    strcpy(authorname,"Bieber");
    price = 500; 
}

Book::Book(int n,const char* t)
{
    NumberofdaysUsed=n;
    strcpy(bookname,t);
}

void Book::accept()
{
    std::cout<<"Enter the book name and author name: "<<"\n";
    std::cin>>bookname>>authorname;
    //std::cout<<"\n";
    std::cout<<"Enter price:";
    std::cin>>price;
    std::cout<<"Enter number of days used:"<<"\n";
    std::cin>>NumberofdaysUsed;
}

void Book::display()
{
    //int fine=0;
    //std::cout<<"\n";
    std::cout<<"Book name: "<<bookname<<"\n";
    std::cout<<"Price: "<<price<<"\n";
    std::cout<<"Number of days used: "<<NumberofdaysUsed<<"\n";
    //std::cout<<"Fine: "<<fine<<"\n";
    //std::cout<<"\n";
}