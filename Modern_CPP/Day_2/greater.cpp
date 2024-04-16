#include<iostream>
#include<algorithm>

int main()
{
    int arr[]={12,21,32,43,56,78,90};
    int key = 45;
    int res = std::count_if(arr,std::end(arr),[key](int num){return num>=key;});
    std::cout<<res<<"\n";
    //you can modify the key value only by using [&key];
    //example: int res = std::count_if(arr,std::end(arr),[&key](int num){++key; return num>=key;});
}
