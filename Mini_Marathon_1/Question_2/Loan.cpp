#include "Loan.h"

Loan::Loan(LoanType type, double loanamount, float loanrate, bool loanstatus)
    :_loanIntent(type),_loan_Amount(loanamount),_loan_int_rate(loanrate),_loan_status(loanstatus)
{
}
std::ostream &operator<<(std::ostream &os, const Loan &rhs) {
    os << " _loan_Amount: " << rhs._loan_Amount
       << " _loan_int_rate: " << rhs._loan_int_rate
       << " _loan_status: " << rhs._loan_status
       << " _loanIntent: ";
       switch(rhs.getloanIntent())
       {
            case LoanType::EDUCATION:
                std::cout<<"EDUCATION";
                break;
            case LoanType::MEDICAL:
                std::cout<<"MEDICAL";
                break;
            case LoanType::PERSONAL:
                std::cout<<"PERSONAL";
            case LoanType::VENTURE:
                std::cout<<"VENTURE";
                break;
            default:
                std::cout<<"INVALID";
       }
    return os;
}
