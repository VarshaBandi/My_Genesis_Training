#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main()
{
    vector<int> v;
    for(int i=0;i<4;i++)
    {
        int ele;
        cin>>ele;
        auto it = upper_bound(v.begin(),v.end(),ele);
        v.insert(it,ele);
    }

    auto it1 = find(v.begin(),v.end(),15);
    v.erase(it1);

    for(int i:v)
    {
        cout<<i<<" ";
    }
}