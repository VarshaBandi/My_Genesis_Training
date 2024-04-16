#include<iostream>
#include<algorithm>

int main()
{
    int arr[]={4,4,1,3};
    int *ele = std::max_element(std::begin(arr),std::end(arr));
    std::cout<<std::count(arr,arr+4,*ele);

    // std::sort(arr,arr+4);
    // int *p1 = std::upper_bound(arr,arr+4,*ele);
    // int *p2 = std::lower_bound(arr,arr+4,*ele);
    // std::cout<<*p1<<"\n";
    // std::cout<<*p2<<"\n";
    // std::cout<<p1-p2<<"\n";
}