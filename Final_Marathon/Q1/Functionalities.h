#ifndef FUNCTIONALITIES_H
#define FUNCTIONALITIES_H

#include"Automobile.h"
#include<iostream>
#include<memory>
#include<vector>
#include"Empty.h"
#include<algorithm>
#include<numeric>

using AutomobilePointer = std::shared_ptr<Automobile>;
//using Container = std::vector<AutomobilePointer>;
using MyContainer = std::array<AutomobilePointer,3>;

void CreateObjects(MyContainer& data);
void DisplayGreenPassCost(MyContainer& data,std::string myId);
void AveragePrice(MyContainer& data);
void DisplayFindPrivilegeType(MyContainer& data);

#endif // FUNCTIONALITIES_H
