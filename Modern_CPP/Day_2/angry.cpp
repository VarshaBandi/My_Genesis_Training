#include<iostream>
#include<algorithm>

int my_count_if(int *start,int *last,bool (*ptr)(int))
{
    int c=0;
    while(start!=last)
    {
        if(ptr(*start))
        {
            c++;
        }
        ++start;
    }
    return c;
}

int main()
{
    //std::vector<int> v;
    int arr[]={-1,-3,4,2};
    int res = my_count_if(arr,arr+4,[](int num){return num>0;});
    int n = sizeof(arr)/sizeof(arr[0]);
    if(res>=n/2)
    {
        std::cout<<"class cancelled";
    }
    else
    {
        std::cout<<"class started";
    }
    //std::cout<<res;
}