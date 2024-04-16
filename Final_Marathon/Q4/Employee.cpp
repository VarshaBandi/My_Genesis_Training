#include "Employee.h"

Employee::Employee(int regid, std::string name, Employeetype emptype, std::string age, int taxamount, int taxpercent)
    :_empreg_id(regid),_empname(name),_empType(emptype),_empage(age),_emptaxable_amount(taxamount),_emptax_percent(taxpercent)
{
}
std::ostream &operator<<(std::ostream &os, const Employee &rhs) {
    os << "_empreg_id: " << rhs._empreg_id
       << " _empname: " << rhs._empname
       << " _empType: " << static_cast<int>(rhs._empType)
       << " _age: " << rhs._empage
       << " _taxable_amount: " << rhs._emptaxable_amount
       << " _tax_percent: " << rhs._emptax_percent;
    return os;
}
