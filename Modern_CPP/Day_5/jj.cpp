#include<iostream>
#include<stack>
#include<queue>
using namespace std;
class Queue
{
    stack<int> s;
    public:

        void push(int n)
        {
            s.push(n);
        }
        int pop()
        {
            stack<int> s2;
            while(s.size()!=1)
            {
                s2.push(s.top());
                s.pop();
            }
            int n=s.top();
            s.pop();
            while(s2.empty()==false)
            {
                s.push(s2.top());
                s2.pop();
            }
            return n;
        }
        int top()
        {
            stack<int> s2;
            while(s.size()!=1)
            {
                s2.push(s.top());
                s.pop();
            }
            
            while(s2.empty()==false)
            {
                s.push(s2.top());
                s2.pop();
            }
        }
        void display()
        {
            
            while(s.empty()==false)
            {
                cout<<s.top()<<" ";
                s.pop();
            }
        }

};
int main()
{
    Queue q;
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    cout<<q.pop()<<endl;
    q.display();
    

}