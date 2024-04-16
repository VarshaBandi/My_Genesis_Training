#include "functionalities.h"

void PerformOperation(FnContainer &fns,DataContainer &data)
{
    for(auto fn:fns)
    {
        std::cout<<fn(data)<<"\n";
    }
}

FnType ReturnVectorString = [](DataContainer &data)
{
    if(data.empty())
    {
        throw EmptyContainer("Data is empty!");
    }
    int minString = data[0].size();
    for(auto ptr:data)
    {
        if(ptr.size()<minString)
        {
            minString = ptr.size();
        }
    }
    for(auto ptr:data)
    {
        if(ptr.size()==minString)
        {
            return ptr;
        }
    }
    return data[0];
};

std::function<std::string(DataContainer& data)> ReturnNoVowelstring = [](DataContainer &data)
->std::string
{
    if(data.empty())
    {
        throw EmptyContainer("Data is empty!");
    }
    std::string str;
    for(std::string ptr:data)
    {
        for(int i=0;i<data.size();i++)
        {
            if(ptr[i]!='a' || ptr[i]!='e' ||ptr[i]!='i' || ptr[i]!='o' || ptr[i]!='u')
            {
                str = ptr;
            }
        }
    }
    return str;
};

FnType ReturnSecondString = [](DataContainer &data)
{
    if(data.empty())
    {
        throw EmptyContainer("Data is empty!");
    }
    return data[1];
};

void CreateFunction(FnContainer &fns)
{
    fns.emplace_back(ReturnVectorString);
    fns.emplace_back(ReturnNoVowelstring);
    fns.emplace_back(ReturnSecondString);
}
