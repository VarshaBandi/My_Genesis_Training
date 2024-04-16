#include<iostream>

int main()
{
    int arr[] = {5,10,12,14,15};

    for(int &i:arr) //values of arr will be modified
    {
        i = i+2;
    }

    for(int i:arr) //values of arr will not be modified
    {
        i = i+2;
    }

    for(int i:arr)
    {
        std::cout<<i<<" ";
    }
}