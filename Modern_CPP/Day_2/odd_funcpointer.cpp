#include<iostream>
#include<algorithm>
using namespace std;

bool isOdd(int n)
{
    return n%2!=0;
}

int mycount_if(int *a,int *b,bool(*ptr)(int))
{
    int c=0;
    while(*a!=*b)
    {
        if(ptr(*a))
            c++;
        *a++;
    }
    return c;
}
int main()
{
    bool (*ptr)(int) = isOdd;
    int arr[]={2,99,78,43,22,86,1};
    //one way
         int n = mycount_if(begin(arr),end(arr),isOdd);
         cout<<n;
    //second way
        //cout<<count_if(begin(arr),end(arr),isOdd);
    //third way
        //cout<<count_if(begin(arr),end(arr),[](int n){return n%2!=0;});
}