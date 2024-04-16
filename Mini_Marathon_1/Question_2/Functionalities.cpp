#include"Functionalities.h"

void CreateObjects(Container& data,MyContainer& mydata)
{
    data.emplace_back(std::make_shared<Person>(22,59000,std::make_shared<Loan>(LoanType::PERSONAL,35000,16.02f,true)));
    data.emplace_back(std::make_shared<Person>(25,9600,std::make_shared<Loan>(LoanType::MEDICAL,5500,12.87f,true)));
    data.emplace_back(std::make_shared<Person>(23,65500,std::make_shared<Loan>(LoanType::MEDICAL,35000,15.23f,false)));
    data.emplace_back(std::make_shared<Person>(21,9900,std::make_shared<Loan>(LoanType::VENTURE,2500,7.14f,false)));

}

std::function<void (Container&data)> newfindAverageLoanAmount=[](Container& data)->void{
    float average;
    int sum=0,count=0;
    for(Pointer& ptr:data)
    {
        if(ptr->loan()->getloanIntent()==LoanType::MEDICAL)
        {
            count++;
            sum += ptr->loan()->getloanAmount();
        }
    }
    average = sum/count;
    std::cout<<"Average is: "<<average<<"\n";
};

void findAverageLoanAmount(Container& data)
{
    float average;
    int sum=0,count=0;
    for(Pointer& ptr:data)
    {
        if(ptr->loan()->getloanIntent()==LoanType::MEDICAL)
        {
            count++;
            sum += ptr->loan()->getloanAmount();
        }
    }
    average = sum/count;
    std::cout<<"Average is: "<<average<<"\n";
}

std::function<std::array<int,4>(Container& data)> findValueCount=[](Container& data)
->std::array<int,4>
{
    std::array<int,4>result;
    //int E_count=0,P_count=0,M_count=0,V_count=0;
    std::array<int,4>arr{0};
    for(Pointer& ptr:data)
    {
        if(ptr->loan()->getloanIntent()==LoanType::EDUCATION)
        {
            arr[0]++;
        }
        else if(ptr->loan()->getloanIntent()==LoanType::MEDICAL)
        {
            arr[1]++;
        }
        else if(ptr->loan()->getloanIntent()==LoanType::PERSONAL)
        {
            arr[2]++;
        }
        else
        {
            arr[3]++;
        }
    }
    // result[0]=E_count;
    // result[1]=P_count;
    // result[2]=M_count;
    // result[3]=V_count;
    return arr;
};

void findHighestInterestRateForAcceptedLoans(Container& data)
{
    float maximumInterestRate = 0;
    for(Pointer& ptr:data)
    {
        if(ptr->loan()->getloanIntRate()>maximumInterestRate)
        {
            maximumInterestRate = ptr->loan()->getloanIntRate();
        }
    }
    std::cout<<"Highest Interest Rate is: "<<maximumInterestRate<<"\n";
}

void MinMaxAge(Container& data)
{
    float lowValue=data[0]->personAge();
    float HighValue = data[0]->personAge();

    for(Pointer& ptr:data)
    {
        if(ptr->personAge()<lowValue)
        {
            lowValue = ptr->personAge();
        }
    }
    for(Pointer& ptr:data)
    {
        if(ptr->personAge()>HighValue)
        {
            HighValue = ptr->personAge();
        }
    }
    std::cout<<"Person with lowest age is: "<<lowValue<<"\n";
    std::cout<<"Person with Highest age is: "<<HighValue<<"\n";
}

void findContainerr(Container& data)
{
    for(Pointer& ptr:data)
    {
        if((ptr->loan()->getloanAmount()>20000 && ptr->loan()->getloanAmount()<40000)&&(ptr->loan()->getloanStatus()==true)&&(ptr->personAge()>23))
        {
            std::cout<<*ptr;
            std::cout<<"\n";
        }
    }
}

void findMaximumLoanIntRate(Container& data,LoanType intent)
{
    float maximumLoanIntRate=data[0]->loan()->getloanIntRate();
    for(Pointer& ptr:data)
    {
        if((ptr->loan()->getloanIntent()==intent)&&(ptr->loan()->getloanIntRate()>maximumLoanIntRate))
        {
            maximumLoanIntRate = ptr->loan()->getloanIntRate();
        }
    }
    std::cout<<"Maximum of all loan_int_rates is: "<<maximumLoanIntRate<<"\n";
}