#include<iostream>
#include<algorithm>

bool compare(int a)
{
    for(int i=2;i<a/2;i++)
    {
        if(a%i==0)
        {
            return false;
        }
    }
    return true;
}

int main()
{
    int arr[]={12,3,34,6,54,5,8};
    std::cout<<std::count_if(std::begin(arr),std::end(arr),compare);
}