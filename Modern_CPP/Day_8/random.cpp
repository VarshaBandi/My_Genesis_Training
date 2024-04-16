#include<iostream>
#include<set>
using namespace std;

class RandomizedSet {
public:
    set<int> s;
    RandomizedSet() {
        
    }
    
    bool insert(int val)
    {
        for(auto i:s)
        {
            if(val==i)
                return false;
        }
        s.insert(val);
        return true;
    }
    
    bool remove(int val)
    {
        for(auto i:s)
        {
            if(i==val)
            {
                s.erase(val);
                return true;
            }
        }
        return false;
    }
    
    int getRandom()
    {
        auto it=s.begin();
        advance(it,rand()%s.size());
        return *it;
    }
};

int main()
{

    //Your RandomizedSet object will be instantiated and called as such:
    RandomizedSet *obj = new RandomizedSet();
    if(bool p1 = obj->insert(3))
    {
        cout<<"True"<<" ";
    }
    else{
        cout<<"False"<<" ";
    }
    bool p2 = obj->insert(9);
    if(p2)
        cout<<"True"<<" ";
    else
        cout<<"False"<<" ";
    bool p3 = obj->insert(3);
    if(p3)
        cout<<"True"<<" ";
    else
        cout<<"False"<<" ";
    bool p4 = obj->insert(2);
    if(p4)
        cout<<"True"<<" ";
    else
        cout<<"False"<<" ";

    bool p5 = obj->remove(5);
    if(p5)
        cout<<"True"<<" ";
    else
        cout<<"False"<<" ";
    bool p6 = obj->remove(3);
    if(p6)
        cout<<"True"<<" ";
    else
        cout<<"False"<<" ";
    int p7 = obj->getRandom();
    int p8 = obj->getRandom();
    cout<<p7<<" "<<p8;
}
