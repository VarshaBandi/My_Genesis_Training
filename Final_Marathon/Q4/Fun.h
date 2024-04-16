#ifndef FUN_H
#define FUN_H

#include"Employee.h"
#include"BusinessOwner.h"
#include<memory>
#include<vector>
#include<variant>
#include<algorithm>
#include<numeric>
#include"EmptyData.h"
#include<iostream>
#include<thread>
#include<array>
#include<future>

using EmpPointer = std::shared_ptr<Employee>;
using BusPointer = std::shared_ptr<BusinessOwner>;
using Pointer = std::variant<EmpPointer,BusPointer>;
using Container = std::vector<Pointer>;

void CreateObjects(Container& data);
void CountInstances(Container& data,std::string Myage);
void CheckEmployeeInstances(Container& data,int taxamount);
void InstancesTaxPercent(Container& data,std::future<int>& ft);

#endif // FUN_H
