#ifndef FUNCTIONALITIES_H
#define FUNCTIONALITIES_H

//Functionalities.h file contains: 
#include<thread>
#include<functional>
#include<iostream>
#include<array>
#include<vector>
#include<future>

void printsum(int input);
void Displayeven(std::vector<int> &data);
void SquareNumbers(std::vector<int> &data);
void CubeNumbers(std::vector<int> &data);

std::vector<int> GenerateN(std::future<int>& ft);


#endif // FUNCTIONALITIES_H
