#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main()
{
    vector<int> v={12,34,56,91,0};
    // for(int i=0;i<5;i++)
    // {
    //     int a;
    //     cin>>a;
    //     v.push_back(a);
    // }

    //v.pop_back();
    cout<<v.size()<<"\n";

    cout<<"Enter an element: ";
    int ele;
    cin>>ele;

    cout<<"Accessing elements: "<<"\n";
    //vector<int>::iterator it;
    auto it = v.begin()+2;

    v.insert(it,ele);
    it = v.begin();
    // for(int it:v)
    //     cout<<it<<" ";
    for(int i=0;i<v.size();i++)
    {
        cout<<*it<<" ";
        *it++;
    }

    //v.insert(ele,2);
    //cout<<v.max_size();
    // v.resize(3);
    //cout<<count_if(begin(v),end(v),9);

    // for(int i:v)
    // {
    //     cout<<i<<" ";
    // }

}