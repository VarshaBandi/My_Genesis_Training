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
#include<queue>

using Epointer = std::shared_ptr<ElectricVehicle>;
using Container = std::vector<Epointer>;
using MyPriorityQueue = std::priority_queue<Epointer>;

//void CreateObjects(Container& data);
void CreateObjects(MyPriorityQueue& data);

void DisplayObjects(MyPriorityQueue& data);


#endif // FUNCTIONALITY_H
