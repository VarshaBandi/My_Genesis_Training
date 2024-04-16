#ifndef FUNC_HPP
#define FUNC_HPP
#include<memory>
#include<iostream>
#include<functional>
#include"Flight.hpp"
#include"Airplane.hpp"
#include"EmptyContainer.hpp"
#include<thread>
#include<future>
#include<algorithm>
#include<numeric>

using FlightPointer = std::shared_ptr<Flight>;
using FlightContainer = std::vector<FlightPointer>;

using PlanePointer = std::shared_ptr<Airplane>;
using MyPlanecontainer = std::vector<PlanePointer>;
using PlaneContainer = std::vector<Airplane>;

void CreateObjects(FlightContainer &flightData,PlaneContainer &planeData);

//extern std::function<AirplaneType(FlightContainer&)> ReturnAirplaneType;

//extern std::function<MyPlanecontainer(FlightContainer&,int value)>ReturnAirplaneInstances;

// extern std::function<std::vector<Flight> (FlightContainer &flightData,FlightOperatorType type)>ReturnTypeAirplaneInstances;
extern std::function<int (FlightContainer &flightData)>ReturnAirplaneSeatCount;
extern std::function<std::vector<Flight> (FlightContainer &flightData,int value)>ReturnThresholdValue;
#endif // FUNC_HPP
