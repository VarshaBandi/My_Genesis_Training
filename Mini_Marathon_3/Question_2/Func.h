#ifndef FUNC_H
#define FUNC_H

#include<iostream>
#include<vector>
#include<memory>
#include"Train.h"
#include"Empty.h"
#include"Invalid.h"

using Fntype = std::shared_ptr<Train>;
using Container = std::vector<Fntype>;
using TicketContainer = std::vector<TrainTicket>;
using MyContainer = std::vector<std::shared_ptr<TrainTicket>>;

void CreateObjects(Container& data);
int PrintTrainInstances(Container &data);
void DepartureTimeInstances(Container & data,int value);
std::optional<int> TotalTicketPrice(Container& data,std::string str);
std::optional<std::string> Trainstartingstation(Container& data, int value);

#endif // FUNC_H
