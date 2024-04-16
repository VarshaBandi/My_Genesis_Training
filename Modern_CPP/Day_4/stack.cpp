#include<iostream>
#include<algorithm>
#include<string>
#include<stack>
using namespace std;

int main()
{
    stack<string> s;

    s.push("Varsha");
    //cout<<s.size()<<"\n";
    s.push("Murali");
    s.push("Ravi");
    //s.pop();
    //s.swap();
    while(s.empty()==0)
    {
        cout<<s.top()<<"\n";


    // for(auto str:s)
    //     cout<<str;

//push, pop, top, size

}
