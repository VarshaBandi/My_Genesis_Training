#ifndef FUNCTIONALITIES_H
#define FUNCTIONALITIES_H
#include<iostream>
#include<memory>
#include<list>
#include"Sensor.h"

using Pointer = std::shared_ptr<Sensor>;
using Container = std::list<Pointer>;

void CreateObjects(Container& data);
bool findInstanceOfReading(Container& data);
void findAverageReadingValue(Container& data,SensorType type);
std::list<Sensor> findSensorInstances(Container& data);

#endif // FUNCTIONALITIES_H
