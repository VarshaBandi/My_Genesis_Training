#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
    int s[] = {23,98,12,4,67,55};
    int key = 4;
    //sort(begin(s),end(s),greater<int>()); //greater<int>() is an inbuilt function to
                                            // sort the elements in descending order
    find_if(begin(s),end(s),[=](){return key;});
    for(int ele:s)
        cout<<ele<<endl;
}