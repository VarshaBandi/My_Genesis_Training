#include<iostream>
#include<algorithm>
#include<vector>
#include<string>
#include<list>
using namespace std;

template<class T>
void display(T str)
{
    for(auto i:str)
        cout<<i<<" ";
    cout<<"\n";
}

int main()
{
    vector<string> v={"Varsha ","Aman ","Bhagya "};
    list<string> l={"Ravi ","Abhijeeth ","Parth "};

    // display(v);
    // display(l);
    auto it_v = begin(v);
    auto it_l = begin(l);

    v.push_back("Poorvika");
    it_v = begin(v);
    l.push_back("charan");

    cout<<*it_v;
    cout<<*it_l;

    // while(it_v != end(v))
    // {
    //     cout<<*it_v<<" ";
    //     it_v++;
    // }
    // cout<<"\n";
    // while(it_l != end(l))
    // {
    //     cout<<*it_l<<" ";
    //     it_l++;
    // }

    // it_v = it_v+2;
    // cout<<*it_v<<"\n";

    // it_l++;
    // cout<<*it_l;
}