#include<iostream>
using namespace std;

class Solution {
public:
    int climbStairs(int n)
    {
        int step_count;
        int a =0;
        int b =1;
        
        for(int i=0;i<n;i++)
        {
            step_count = a+b;
            a = b;
            b = step_count;
        }
        return step_count;  
    }
};
int main()
{
    Solution s;
    cout<<s.climbStairs(4);
}