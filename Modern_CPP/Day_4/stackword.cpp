#include<iostream>
#include<algorithm>
#include<cstring>
#include<stack>
using namespace std;

int main()
{
    stack<char> s;
    string str;//="today is thursday ";
    cout<<"Enter a string: ";
    getline(cin,str);

    for(int i=0;i<=str.length();i++)
    {
        //cout << str[i];
        //if(str[i]>='a' && str[i]<='z')
        if(str[i]!=' ')// && i!=str.length())
        {
            s.push(str[i]);
        }
        else
        {
            while(!s.empty())
            {
               cout<<s.top();
                s.pop();
            }
            cout<<" ";
        }
    }
    // while(!s.empty())
    //         {
    //             cout<<s.top();
    //             s.pop();
            // }
}
