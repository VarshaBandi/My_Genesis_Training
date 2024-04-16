#include<iostream>
#include<string>
using namespace std;

auto mymax(auto a,auto b)
{
    return a>b?a:b;
}

int main()
{
    cout<<mymax(5,10)<<"\n";
    cout<<mymax(2.3,5.5)<<"\n";
    cout<<mymax("Varsha","Bandi");
}