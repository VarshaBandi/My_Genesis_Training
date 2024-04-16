#include "Fun.h"

void CreateObjects(Container &data)
{
    data.emplace_back(std::make_shared<Employee>(134,"Varsha",Employeetype::FULL_TIME,"21",345,10));
    data.emplace_back(std::make_shared<Employee>(503,"Murali",Employeetype::PERMIT_HOLDER,"21",367,29));
    data.emplace_back(std::make_shared<BusinessOwner>(748,"Deepa",BusinessType::INTERNATIONAL,"25",577,16));
    data.emplace_back(std::make_shared<BusinessOwner>(834,"Harshit",BusinessType::MULTISTATE,"25",947,30));
    data.emplace_back(std::make_shared<Employee>(376,"Bhagya",Employeetype::FULL_TIME,"22",947,15));
}

void CountInstances(Container &data, std::string Myage)
{
    if(data.empty())
    {
        throw EmptyContainerException("Data is empty");
    }
    int count = 0;

    std::for_each(data.begin(),data.end(),[&](std::variant<EmpPointer,BusPointer>& ptr)
    {
        if(std::holds_alternative<BusPointer>(ptr))
        {
            auto pt = std::get<BusPointer>(ptr);

            if(pt->age()==Myage)
            {
                count++;
            }
        }
    });

    std::cout<<"Count of Business Owner Instances whose age is above threshold value is: "<< count<<"\n";
}

void CheckEmployeeInstances(Container &data, int taxamount)
{
    if(data.empty())
    {
        throw EmptyContainerException("Data is empty");
    }

    bool flag = std::all_of(data.begin(),data.end(),[&](std::variant<EmpPointer,BusPointer>& ptr)
    {
        if(std::holds_alternative<EmpPointer>(ptr))
        {
            auto pt = std::get<EmpPointer>(ptr);

            return pt->taxableAmount()>taxamount;
        }
        return true;
    });

    if(flag)
    {
        std::cout<<"All Employee instances have tax amount greater than threshold value"<<"\n";
    }
    else
    {
        std::cout<<"All instances doesn't have tax greater than threshold value"<<"\n";
    }
}

void InstancesTaxPercent(Container &data, std::future<int>& ft)
{
    if(data.empty())
    {
        throw EmptyContainerException("Data is empty");
    }

    Container result;

    int percent = ft.get();

    std::cout<<"Instances with tax percent below the given value are: "<<"\n";

    std::for_each(data.begin(),data.end(),[&](std::variant<EmpPointer,BusPointer>& ptr)
    {
        if(std::holds_alternative<EmpPointer>(ptr))
        {
            auto pt = std::get<EmpPointer>(ptr);

            if(pt->taxPercent()<percent)
            {
                std::cout<<*pt<<"\n";
            }
        }
        else if(std::holds_alternative<BusPointer>(ptr))
        {
            auto pt = std::get<BusPointer>(ptr);

            if(pt->BtaxPercent()<percent)
            {
                std::cout<<*pt<<"\n";
            }
        }
    });
}
