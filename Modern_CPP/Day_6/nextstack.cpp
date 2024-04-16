#include<iostream>
#include<stack>
using namespace std;

class Nxt
{
    public:
    stack<int> s1;
 

        void nextgreat(int a[],int siz)
        {
            int arr[siz];
            //int siz = sizeof(a)/sizeof(int);
            for(int i=siz-1;i>=0;i--)
            {

                while(!s1.empty()&&a[i]>=s1.top())
                {
                    s1.pop();

                }
                if(s1.empty())
                {
                    arr[i]=-1;

                }
                else{
                    arr[i] = s1.top();
                }

            s1.push(a[i]);
                
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
    int arr[]={3,4,9,2,8,7};
    int sz = sizeof(arr)/sizeof(int);

    n.nextgreat(arr,sz);
    // int res[5];
    // res[4]=-1;

    // for(int i=0;i<sz;i++)
    // {   bool isgreat=false;
    //     for(int j=i+1;j<sz;j++)
    //     {
    //         if(arr[j]>arr[i])
    //         {
    //             res[i]=arr[j];
    //             isgreat=true;
    //             break;
    //         }
    //         else{
    //             res[i]=-1;
    //         }
    //     }
    // }

    // for(int i=0;i<sz;i++)
    // {
    //     cout<<res[i]<<" ";
    // }

    // n.display();
}