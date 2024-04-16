#include<iostream>
#include<cstring>
class Bank
{
    int accno;
    char name[30];
    double balance;
    public:
    Bank(int ac=0,const char *n="Bandi",double b=0.0)
    {
        accno=ac;
        strcpy(name,n);
        balance=b;
    }
    void display()
    {
        std::cout<<"\nacc:"<<accno<<" name:"<<name<<" Balance:"<<balance<<std::endl;
    }

};
class Factory
{
    Bank *b;
    public:
    //Bank b;
   // Bank *b;
   
    Factory()
    {
        b=new Bank();
        //b;
    }
    Factory(int acc,const char *n,double bal)
    {
        b=new Bank(acc,n,bal);   
        //b(acc,n,bal)
    }

    Bank* operator->()
    {
        return b;
    }

};
int main()
{
    Factory f1(20100,"Varsha",4334);
    f1->display();
    // Factory f2;
    // f2.b.display();
    
    return 0;
}