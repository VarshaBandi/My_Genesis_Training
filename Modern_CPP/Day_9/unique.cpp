#include<iostream>
#include<vector>
#include<map>
using namespace std;


class Solution {
public:
    map<int,int> m;
    vector<int> v1;
    bool uniqueOccurrences(vector<int>& arr) {
        for(int i=0;i<arr.size();i++)
        {
            int count = 0;
            for(int j=0;j<arr.size();j++)
            {
                if(arr[i]==arr[j])
                {
                    count++;
                }
            }
            m[arr[i]]=count;
        }

        auto it = m.begin();
        for(auto i:m)
        {
            v1.push_back(i.second);
        }

        for(int i=0;i<v1.size();i++)
        {
            for(int j=i+1;j<v1.size();j++)
            {
                if(v1[i]==v1[j])
                {
                    return false;
                }
            }
        }
        return true;
    }
};

int main()
{
    Solution s;
    vector<int> arr{1,2,2,1,1,3};
    cout<<s.uniqueOccurrences(arr)<<"\n";
}