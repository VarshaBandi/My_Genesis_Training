#include<iostream>
#include<cstring>
#include"dynamic1.h"

void displaying()
    {
        std::cout<<"Options are:"<<"\n";
        std::cout<<"----------------------------------------"<<"\n";
        //std::cout<<"1) Accept data"<<"\n";
        std::cout<<"1) Display data"<<"\n";
        std::cout<<"2) Withdraw amount"<<"\n";
        std::cout<<"3) Credit amount"<<"\n";
    }

    void wdraw(Bank b[],int n)
    {
        int w,flag = 1;
        char na[30];
        std::cout<<"Enter name of the account holder:"<<"\n";
        std::cin>>na;
        std::cout<<"Enter withdrawal amount:"<<"\n";
        std::cin>>w;
        for(int i=0;i<n;i++)
        {
            if(strcmp(b[i].getname(),na)==0)
            {
                flag = 0;
                //balance = balance-w
                int m;
                m = b[i].getBalance();
                b[i].setBalance(m-w);
                b[i].display();
                break;
            }
        }
        if(flag)
        {
            std::cout<<"Account holder not found"<<"\n";
        }
        // for(int i=0;i<n;i++)
        //     {
        //         b[i].display();
        //     }
    }

    void creditt(Bank b[],int n)
    {
        int c,flag = 1;
        char na[30];
        std::cout<<"Enter name of the account holder:"<<"\n";
        std::cin>>na;
        std::cout<<"Enter credit amount:"<<"\n";
        std::cin>>c;
        for(int i=0;i<n;i++)
        {
            if(strcmp(b[i].getname(),na)==0)
            {
                flag = 0;
                //balance = balance+w;
                int n;
                n = b[i].getBalance();
                b[i].setBalance(n+c);
                b[i].display();
                break;
            }
        }
        if(flag)
        {
            std::cout<<"Account holder not found"<<"\n";
        }
        // for(int i=0;i<n;i++)
        //     {
        //       b[i].display();
        //     }
    }
int main()
{
    // Bank b;
    // b.display();
    // Bank b("Fruity",325);
    // b.display();
    // Bank b;
    // b.accept();
    // b.display();
    int n,k;
    std::cout<<"Enter n:"<<"\n";
    std::cin>>n;
    Bank *b = new Bank[n];
    for(int i=0;i<n;i++)
        {
            b[i].accept();
        }
    displaying();
    std::cin>>k;
    switch(k)
    {
        case 1:
            for(int i=0;i<n;i++)
            {
                b[i].display();
            }
            break;
        case 2:
            wdraw(b,n);
            break;
        case 3:
            creditt(b,n);
            break;

    }
}