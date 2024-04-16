#ifndef FUNCTIONALITIES_H
#define FUNCTIONALITIES_H
#include<functional>
#include"EmptyContainer.h"
#include<iostream>
#include<vector>

using FnType = std::function<std::string(std::vector<std::string>&)>;
using FnContainer = std::vector<FnType>;
using DataContainer = std::vector<std::string>;

void CreateFunction(FnContainer &fns);
void PerformOperation(FnContainer &fns,DataContainer &data);
extern FnType ReturnVectorString;
extern FnType ReturnNoVowelstring;
extern FnType ReturnSecondString;

//using FnType = std::function<int(std::vector<int>&data)>;
#endif // FUNCTIONALITIES_H
