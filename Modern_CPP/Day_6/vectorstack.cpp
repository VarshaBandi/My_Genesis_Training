#include<iostream>
#include<vector>
using namespace std;

class Nxt
{
    public:
    vector<int> v1;
 

        void nextgreat(int a[],int siz)
        {
            int arr[siz];
            //int siz = sizeof(a)/sizeof(int);
            for(int i=0;i<siz;i++)
            {
                for(int j=0;j<)
            }
            
            for(int i=0;i<siz;i++)
            {
                cout<<arr[i]<<" ";
            }cout<<endl;
        }
       
};

int main()
{
    Nxt n;
    int arr[]={3,4,9,2,7};
    int sz = sizeof(arr)/sizeof(int);

    n.nextgreat(arr,sz);
}