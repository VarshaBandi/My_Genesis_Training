#include<iostream>
#include<map>
#include<vector>
using namespace std;

class Solution {
public:
    vector<int> v1;
    vector<int> v2;

    // vector<vector<int>>
    void findWinners(vector<vector<int>>& matches) 
    {
        map<int, int> m;
        for(int i=0;i<matches.size();i++)
        {
            m[matches[i][0]]=0;
            m[matches[i][1]]=0;
        }

        for(int i=0;i<matches.size();i++)
        {
            m[matches[i][1]]++;
        }

        for(auto i:m)
        {
            if(i.second==0)
            {
                v1.push_back(i.first);
            }
            else if(i.second==1)
            {
                v2.push_back(i.first);
            }
        }

        for(auto i:v1)
        {
            cout<<i<<" ";
        }
        cout<<"\n";
        for(auto i:v2)
        {
            cout<<i<<" ";
        }
    }
};

int main()
{
    vector<vector<int>> v{{2,3},{1,3},{5,4},{6,4},{3,1}};
    Solution sl;
    sl.findWinners(v);
    //playerloss(m);
}