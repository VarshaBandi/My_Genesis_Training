#include "BusinessOwner.h"

std::ostream &operator<<(std::ostream &os, const BusinessOwner &rhs) {
    os << "_busreg_id: " << rhs._busreg_id
       << " _busname: " << rhs._busname
       << " _busType: " << static_cast<int>(rhs._busType)
       << " _busage: " << rhs._busage
       << " _bustaxable_amount: " << rhs._bustaxable_amount
       << " _bustax_percent: " << rhs._bustax_percent;
    return os;
}
BusinessOwner::BusinessOwner(int regid, std::string name, BusinessType type, std::string age, int taxamount, int taxpercent)
    :_busreg_id(regid),_busname(name),_busType(type),_busage(age),_bustaxable_amount(taxamount),_bustax_percent(taxpercent)
{
}
