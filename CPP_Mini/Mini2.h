#ifndef MINI2_H
#define MINI2_H

#include<iostream>

class Loan
{
    float Amount;
    char Name[30];
    float Interestamount;
    long int Loannumber;

    public:
        Loan();
        Loan(float);
        void accept();
        void display();
        int getloan()
        {
            return Loannumber;
        }
        int getamount()
        {
            return Amount;
        }
        int getinterest()
        {
            return Interestamount;
        }
        char* getname()
        {
            return Name;
        }
        friend void operator>>(std::istream &is, Loan &ln);

        friend void operator<<(std::ostream &os, Loan &ln);

        float amount() const { return Amount; }
        void setAmount(float amount) { Amount = amount; }

        float interestamount() const { return Interestamount; }
        void setInterestamount(float interestamount) { Interestamount = interestamount; }

        long int loannumber() const { return Loannumber; }
        void setLoannumber(long int loannumber) { Loannumber = loannumber; }
};

#endif // MINI2_H
