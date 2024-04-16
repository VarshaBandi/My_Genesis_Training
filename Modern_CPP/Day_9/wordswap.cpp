#include<iostream>
#include<cstring>
#include<vector>
#include<map>
#include<set>
using namespace std;

class Solution {
public:
    set<char>s;
    bool closeStrings(string word1, string word2)
    {
        if(word1.length()!=word2.length())
        {
            return false;
        }
        map<char,int>m1,m2;
        for(int i=0;i<word1.length();i++)
        {
            char ch = word1[i];
            m1[ch]++;
        }
        for(int i=0;i<word2.length();i++)
        {
            char ch = word2[i];
            m2[ch]++;
        }

        auto itr = m1.begin();
        for(auto i:m1)
        {
            if(m2.find(i.first)==m2.end())
            {
                return false;
            }
        }

        auto itr1 = m1.begin();
        auto itr2 = m2.begin();
        int count=0;
        for(int i=0;i<m1.size();i++)
        {
            for(int j=0;j<m2.size();j++)
            {
                if(m1[itr1->first]==m2[itr2->first])
                {
                    count++;
                    itr1++;
                    m2[itr2->first]=-1;
                    itr2 = m2.begin();
                    break;
                }
                else{
                    itr2++;
                }
            }
        }
        if(count==m1.size())
        {
            return true;
        }
        else{
            return false;
        }
        // set<int>s1;
        // set<int>s2;
        // for(auto i:m1)
        // {
        //     s1.insert(m1[i.first]);
        // }
        // for(auto i:m2)
        // {
        //     s2.insert(m2[i.first]);
        // }
        // for(int i=0;i<s1.size();i++)
        // {

        // }
        //return true;
    }
};
int main()
{
    Solution s;
    cout<<s.closeStrings("cabbba","abbccc");
}