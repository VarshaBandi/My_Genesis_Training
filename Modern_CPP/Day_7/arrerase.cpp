#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main()
{
    vector<int> v{1,5,21,19,30,7};
    // auto it = upper_bound(v.begin(),v.end(),21);
    // auto it = lower_bound(v.begin(),v.end(),21);
    // v.erase(it);

    v.erase(find(v.begin(),v.end(),19));
    for(int i: v)
    {
        cout<<i<<" ";
    }
}