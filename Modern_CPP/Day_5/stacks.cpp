#include<iostream>
#include<stack>
using namespace std;

class myQueue
{
    stack<int>s1;
    stack<int>s2;
    public:
        // stack<int>s1;
        // stack<int> nums2;
        void push(int num)
        {
            s1.push(num);
        }
        void pop()
        {
            int sz=s1.size();
            for(int i=0;i<sz-1;i++)
            {
                s2.push(s1.top());
                s1.pop();
            }

            s1.pop();

            int sz1=s2.size();
            for(int i=0;i<sz1;i++)
            {
                s1.push(s2.top());
                s2.pop();
            }
        }
        void display()
        {
            //int fin = s1.size();
            while(!s1.empty())
            {
                cout<<s1.top()<<" ";
                s1.pop();
            }
        }
};

int main()
{
    myQueue q;
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.pop();
    q.push(50);
    q.push(60);
    q.pop();
    q.display();
}