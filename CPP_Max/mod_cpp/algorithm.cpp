#include<algorithm>
#include<iostream>
#include<string>
template<class T>
T mymax_element(T a,T b)
{
    int *ptr = std::max_element(a,b);
    return ptr;
    
    
}
int main()
{
    int arr[]={8,0,12,5,2};
    int *ptr = mymax_element(arr,arr+5);
    std::cout<<*ptr<<"\n";
    // int *ptr = std::max_element(arr,arr+3);
    // std::cout<<*ptr<<"\n";
    std::cout<<ptr-arr;
}