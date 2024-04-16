#include<iostream>
using namespace std;

bool isOdd(int a)
{
    return a%2!=0;
}
int mycount_if(int *start,int *last,bool(*p)(int))//user defined
{
    int c=0;
    for(int* i=start;i<last;i++)
    {
        if(p(*i))
            c++;
    }
    return c;
}

bool isgreater(int ele,int k)
{
    return ele>=k;
}
int mycount_if1(int *start,int *last,bool(*p)(int,int),int k)//user defined
{
    int c=0;
    for(int* i=start;i<last;i++)
    {
        if(p(*i,k))
            c++;
    }
    return c;
}
int main()
{
    bool (*ptr)(int,int) = isgreater;
    //bool (*ptr)(int);//function pointer declaration
    // ptr=isOdd;
    // cout<<ptr(7);
    int a[]={3,7,8,2,10};
    int key;
    cout<<"enter key:";
    cin>>key;
    //cout<<ptr(begin(a),key);
    //int n=mycount_if(begin(a),end(a),isOdd);
    int n=mycount_if1(begin(a),end(a),isgreater,key);
    cout<<n;
}
