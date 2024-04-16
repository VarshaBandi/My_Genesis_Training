#include<iostream>
#include<algorithm>

template<class T>
void my_max(T arr,T arr1)
{
    int *ptr = std::max_element(arr,arr1);
    std::cout<<*ptr<<"\n";
    std::cout<<ptr-arr;
}
int main()
{
    int arr[]={4,9,0,13,2};
    my_max(arr,arr+5);
}