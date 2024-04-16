#include<iostream>
#include<cmath>
using namespace std;

class Solution {
public:
    bool isPowerOfFour(int n) {
        int i=0;
        while(i<n)
        {
            if(n==pow(4,i))
            {
                return true;
            }
            i++;
        }
        return false;
    }
};

int main()
{
    Solution s;
    cout<<s.isPowerOfFour(5);
}