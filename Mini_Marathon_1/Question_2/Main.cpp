#include<iostream>
#include"Functionalities.h"

int main()
{
    Container data;
    MyContainer Mydata;

    CreateObjects(data,Mydata);

    // findAverageLoanAmount(data);
    newfindAverageLoanAmount(data);

    std::array<int,4>answer = findValueCount(data);
    for(auto i:answer)
    {
        std::cout<<i<<" ";
    }
    std::cout<<"\n";
    
    findHighestInterestRateForAcceptedLoans(data);

    MinMaxAge(data);

    findContainerr(data);

    findMaximumLoanIntRate(data,LoanType::EDUCATION);
}