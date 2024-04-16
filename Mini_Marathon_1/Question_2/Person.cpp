#include "Person.h"

Person::Person(int age, double income, LoanPointer loan)
    :_person_age(age),_person_Income(income),_loan(loan)
{
}

std::ostream &operator<<(std::ostream &os, const Person &rhs) {
    os << "_person_age: " << rhs._person_age
       << " _person_Income: " << rhs._person_Income
       << " _loan: " << rhs._loan;
    return os;
}
