#include<iostream>
#include<algorithm>
#include<stack>
using namespace std;


int sumstack(int a[],int n)
{   int sum=0;
    for(int i=0;i<n;i++) sum+=a[i];
    return sum;
}

int main()
{
    stack<int> s1,s2,s3;
    int n1[]={1,1,1,2,3};
    int n2[]={2,3,4};
    int n3[]={1,4,1,1};
    // sums cal
    int a=sumstack(n1,5);
    int b=sumstack(n2,3);
    int c=sumstack(n3,4);
    // stacks 
    for(auto i : n1)
    {
        s1.push(i);
    }
    for(auto i : n2)
    {
        s2.push(i);
    }
    for(auto i : n3)
    {
        s3.push(i);
    }
    
    while(!(a==b && b==c))
    {
     if(a>b && a>c){
        a-=s1.top();
        s1.pop();
     }
     else if(b>a && b>c){
        b-=s2.top();
        s2.pop();
     }else{
        c-=s3.top();
        s3.pop();
     }
    }
    cout<<a;
}