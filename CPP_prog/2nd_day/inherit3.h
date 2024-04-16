#include<iostream>

class Training
{
    public:
        Training();
        Training(int);
        virtual void lectures(){}
        ~Training() {}
};

class online:public Training
{
    public:
        online();
        online(int);
        ~online(){}
        void lectures();
        void recordings();
};

class offline:public Training
{
    public:
        offline();
        offline(int);
        ~offline(){}
        void lectures();
        void oneonone();
};