#include<iostream>
#include<queue>
#include<stack>
using namespace std;

class mystack
{
    queue<int> q1;
    queue<int>q2;
    public:
        void push(int a)
        {
            q1.push(a);
        }
        void pop()
        {
            int sz = q1.size();
            for(int i=0;i<sz-1;i++)
            {
                q2.push(q1.front());
                q1.pop();
            }

            int sz2 = q2.size();
            for(int i=0;i<sz2;i++)
            {
                q1.push(q2.front());
                q2.pop();
            }

            q1.pop();

        }
        void display()
        {
            int fin = q1.size();
            for(int i=0;i<fin;i++)
            {
                cout<<q1.front()<<" ";
                q1.pop();
            }
        }
};

int main()
{
    mystack s1;
    s1.push(10);
    s1.push(20);
    s1.push(30);
    s1.push(40);
    s1.pop();
    s1.push(50);
    s1.push(60);
    s1.pop();
    s1.display();
}