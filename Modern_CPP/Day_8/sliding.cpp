#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    void maxSlidingWindow(vector<int>& nums, int k) {
        int sz = nums.size();
        for(int i=0;i<sz-k;i++)
        {
            int max=nums[i];
            for(int j=0;j<k;j++)
            {
                if(nums[i+j]>max)
                {
                    max = nums[i+j];
                }
            }
            cout<<max<<" ";
        }
    }
};

int main()
{
    Solution sl;
    vector<int> nums{1,3,-1,-3,5,3,6,7};
    int key = 3;
    sl.maxSlidingWindow(nums,key);
}