#ifndef FUNCTIONALITY_H
#define FUNCTIONALITY_H

#include"Ev2Wheeler.h"
#include"EvCar.h"
#include<vector>
#include<memory>
#include<iostream>
#include<algorithm>
#include<numeric>
#include<future>
#include<thread>

using Epointer = std::shared_ptr<ElectricVehicle>;
using Container = std::vector<Epointer>;

void CreateObjects(Container& data);
std::optional<std::shared_ptr<ElectricVehicle>> DisplayAttributes(Container& data,std::future<int>& ft);
void DisplayAveragePrice(Container& data);
Container ReturnInstances(Container& data,float pric);
void TotalGSTAmount(Container& data);
void TotalExchangeAmount(Container& data);


#endif // FUNCTIONALITY_H
