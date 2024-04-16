#ifndef LOAN_H
#define LOAN_H
#include"LoanType.h"
#include <iostream>

class Loan
{
private:
    LoanType _loanIntent;
    double _loan_Amount;
    float _loan_int_rate;
    bool _loan_status;
public:
    Loan()=delete;
    Loan(const Loan&)=delete;
    Loan(Loan&&)=delete;
    Loan& operator=(const Loan&)=delete;
    Loan& operator=(Loan&&)=delete;
     ~Loan()=default;

    Loan(LoanType type,double loanamount,float loanrate,bool loanstatus);

    LoanType getloanIntent() const { return _loanIntent; }
    double getloanAmount() const { return _loan_Amount; }
    float getloanIntRate() const { return _loan_int_rate; }
    bool getloanStatus() const { return _loan_status; }

    friend std::ostream &operator<<(std::ostream &os, const Loan &rhs);
};



#endif // LOAN_H
