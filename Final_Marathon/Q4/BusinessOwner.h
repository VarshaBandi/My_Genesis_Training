#ifndef BUSINESSOWNER_H
#define BUSINESSOWNER_H
#include"BusinessOwnerType.h"
#include<string>
#include <ostream>


class BusinessOwner
{
private:
    int _busreg_id;
    std::string _busname;
    BusinessType _busType;
    std::string _busage;
    int _bustaxable_amount;
    int _bustax_percent;
public:
    BusinessOwner()=delete;
    BusinessOwner(const BusinessOwner&)=delete;
    BusinessOwner(BusinessOwner&&)=delete;
    BusinessOwner& operator=(const BusinessOwner&)=delete;
    BusinessOwner& operator=(BusinessOwner&&)=delete;
     ~BusinessOwner()=default;

    BusinessOwner(int regid,std::string name,BusinessType emptype,std::string age,int taxamount,int taxpercent);

    int regId() const { return _busreg_id; }
    std::string name() const { return _busname; }
    BusinessType empType() const { return _busType; }
    std::string age() const { return _busage; }
    int taxableAmount() const { return _bustaxable_amount; }
    int BtaxPercent() const { return _bustax_percent; }

    friend std::ostream &operator<<(std::ostream &os, const BusinessOwner &rhs);

};


#endif // BUSINESSOWNER_H
