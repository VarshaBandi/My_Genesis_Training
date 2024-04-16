#ifndef FUNCT_H
#define FUNCT_H

#include"EvCar.h"
#include"ICECar.h"
#include"CarType.h"
#include<memory>
#include<vector>
#include<functional>
#include<variant>
#include<iostream>

using EvPointer = std::shared_ptr<EvCar>;
using ICEPointer = std::shared_ptr<ICECar>;
using VarType = std::variant<EvPointer,ICEPointer>;
using Container = std::vector<VarType>;

void CreateObjects(Container& data);

Container FirstNInstances(Container& data,CarType type);

bool AllInstancesICE(Container& data);
void CountInstancesEvCar(Container& data);
ChassisType FindChassisType(Container& data,int id);
void DisplayTotalBatteryCapacity(Container& data);
void DisplayNthInstanceattributes(Container& data,int n);

#endif // FUNCT_H
