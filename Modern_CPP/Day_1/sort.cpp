#include<iostream>
#include<algorithm>

template<class T>
void my_sort(T a,T b)
{
    std::sort(a,b);
}

bool compare(int a,int b)
{
    return a>b;
}
int main()
{
    int arr[]={3,0,1,5,43,23};
    //my_sort(arr,arr+6);

    std::sort(arr,arr+6,compare);
    // std::string arr[]={"Aman","Mallika","Priya","Varma"};
    // my_sort(arr,arr+4);

    for(int i=0;i<4;i++)
    {
        std::cout<<arr[i]<<" ";
    }
}