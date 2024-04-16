#include<iostream>

class Bank
{
    char name[20];
    double balance;
    double withdraw;
    double credit;
    public:
        Bank();
        Bank(const char*,double);
        void accept();
        void display();

        double getBalance() const { return balance; }
        void setBalance(double balance_) { balance = balance_; }

        double getWithdraw() const { return withdraw; }
        void setWithdraw(double withdraw_) { withdraw = withdraw_; }

        double getCredit() const { return credit; }
        void setCredit(double credit_) { credit = credit_; }
};