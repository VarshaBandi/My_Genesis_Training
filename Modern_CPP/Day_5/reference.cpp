#include<iostream>
using namespace std;

class Value
{
    int num;
    public:
        Value(int v_num=0):num(v_num){}
        Value & operator++()
        {
            cout<<"operator ++ "<<this<<endl;
            ++num;
            return *this;
        }
        Value operator++(int)
        {
            cout<<"++ operator "<<this<<endl;
            Value temp = *this;
            ++num;
            return temp;
        }
        friend ostream& operator <<(ostream &os,Value &v)
        {
            os<<v.num;
            return os;
        }
};

int main()
{
    Value v{3};
    ++v;
    cout<<v<<endl;

    Value v1{5};
    Value c = v1++;
    cout<<"Before post-inc : "<<c<<endl;
    cout<<"After post-inc : "<<v1;
}