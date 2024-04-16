#ifndef PERSON_H
#define PERSON_H
#include<memory>
#include <ostream>
#include"Loan.h"
#include<cstring>

using LoanPointer = std::shared_ptr<Loan>;
class Person
{
private:
    int _person_age;
    double _person_Income;
    LoanPointer _loan;
    char* _msg;
public:
    Person()=delete;
    Person(const Person&)=delete;
    // Person(const Person& e)
    // {
    //     _msg = new char[strlen(e._msg)+1];
    //     strcpy(_msg,e._msg);
    // }
    Person(Person&&)=delete;
    Person& operator=(const Person&)=delete;
    Person& operator=(Person&&)=delete;
     ~Person()=default;
    
    Person(int,double,LoanPointer);

    int personAge() const { return _person_age; }
    double personIncome() const { return _person_Income; }
    LoanPointer loan() const { return _loan; }

    char* msg() const { return _msg; }

    friend std::ostream &operator<<(std::ostream &os, const Person &rhs);

    
};



#endif // PERSON_H
