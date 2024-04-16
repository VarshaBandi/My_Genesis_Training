#include<iostream>
#include<algorithm>

template<class T>
void my_min(T arr,T arr1)
{
    int *ptr = std::min_element(arr,arr1);
    std::cout<<*ptr<<"\n";
    std::cout<<ptr-arr;
}
int main()
{
    int arr[]={4,9,0,13,2};
    my_min(arr,arr+5);
}