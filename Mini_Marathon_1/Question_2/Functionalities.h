#ifndef FUNCTIONALITIES_H
#define FUNCTIONALITIES_H
#include<memory>
#include"Person.h"
#include<vector>
#include<functional>

using Pointer = std::shared_ptr<Person>;
using Container = std::vector<Pointer>;
using MyContainer = std::vector<Loan>;


extern std::function<void (Container&data)> newfindAverageLoanAmount;

void CreateObjects(Container& data,MyContainer& mydata);
void findAverageLoanAmount(Container& data);


// auto fp = [](Container num){ 
//     float average;
//     int sum=0,count=0;
//     return sum;
//     };
// void newfindAverageLoanAmount(std::function<int(Container&),Container& data);

extern std::function<std::array<int,4>(Container& data)> findValueCount;
//extern std::function<std::array<int,4>> findValueCount;
void findHighestInterestRateForAcceptedLoans(Container& data);
void MinMaxAge(Container& data);
void findContainerr(Container& data);
void findMaximumLoanIntRate(Container& data,LoanType intent);

#endif // FUNCTIONALITIES_H
