#ifndef EMPLOYEE_H
#define EMPLOYEE_H
#include"EmployeeType.h"
#include<string>
#include <ostream>

class Employee
{
private:
    int _empreg_id;
    std::string _empname;
    Employeetype _empType;
    std::string _empage;
    int _emptaxable_amount;
    int _emptax_percent;
public:
    Employee()=delete;
    Employee(const Employee&)=delete;
    Employee(Employee&&)=delete;
    Employee& operator=(const Employee&)=delete;
    Employee& operator=(Employee&&)=delete;
     ~Employee()=default;

    Employee(int regid,std::string name,Employeetype emptype,std::string age,int taxamount,int taxpercent);

    int regId() const { return _empreg_id; }
    std::string name() const { return _empname; }
    Employeetype empType() const { return _empType; }
    std::string age() const { return _empage; }
    int taxableAmount() const { return _emptaxable_amount; }
    int taxPercent() const { return _emptax_percent; }

    friend std::ostream &operator<<(std::ostream &os, const Employee &rhs);
};

#endif // EMPLOYEE_H
