#include<iostream>
#include<algorithm>
#include<string>
#include<stack>
using namespace std;

int main()
{
    stack<char> s;
    string str;
    cout<<"Enter a string: ";
    cin>>str;

    for(int i=0;i<str.length();i++)
    {
        char ch=str[i];
        if(ch=='{' || ch=='[' || ch=='(')
        {
            s.push(ch);
        }
        else if(!s.empty())
        {
            char cr = s.top();
            if(cr=='{' && ch=='}')
            {
                s.pop();
                continue;
            }
            else if(cr=='[' && ch==']')
            {
                s.pop();
                continue;;
            }
            else if(cr=='(' && ch==')')
            {
                s.pop();
                continue;;
            } 
        }
        else
        {
            cout<<"Not balanced";
            break;
        }
    }
    if(s.empty())
       cout<<"balanced"; 
    else
        cout<<"Not balanced";
}
