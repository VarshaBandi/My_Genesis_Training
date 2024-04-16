#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main()
{
    string s[] = {"Varsha","Aman","Sikander"};
    //sort(begin(s),end(s),greater<int>());
    sort(begin(s),end(s),[](const string &s1,const string &s2)->bool{return s1.length()<s2.length();});

    for(auto ele:s)
        cout<<ele<<endl;
}