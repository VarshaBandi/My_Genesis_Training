#ifndef FUNC_H
#define FUNC_H

#include"Vehicle.h"
#include"ServiceRecord.h"
#include<iostream>
#include<memory>
#include<unordered_map>
#include<vector>
#include<algorithm>
#include<numeric>
#include"EmptyContainer.h"
#include<list>

using VehiclePointer = std::shared_ptr<Vehicle>;
using MapContainer = std::unordered_map<std::string,VehiclePointer>;

void CreateObjects(MapContainer& data);
MapContainer ReturnNVehicleInstances(MapContainer& data,int N);
float AverageCharges(MapContainer& data);
std::string MatchServiceID(MapContainer& data,std::string MyId);
std::unordered_map<std::string,std::string> KeyValuePair(MapContainer& data);
std::unordered_map<std::string,std::string> ReturnPairList(MapContainer& data,std::list<std::string>& Mylist);

#endif // FUNC_H
