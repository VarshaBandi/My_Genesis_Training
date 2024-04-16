#ifndef EMPTYCONTAINER_H
#define EMPTYCONTAINER_H
#include<stdexcept>
#include<cstring>

class EmptyContainer
{
private:
    char * _msg;
public:
    EmptyContainer()=delete;
    EmptyContainer(const EmptyContainer&)=delete;
    EmptyContainer(EmptyContainer&&)=delete;
    EmptyContainer& operator=(const EmptyContainer&)=delete;
    EmptyContainer& operator=(EmptyContainer&&)=delete;
     ~EmptyContainer()=default;

    EmptyContainer(const char* msg)
    {
        _msg = new char[strlen(msg)+1];
        strcpy(_msg,msg);
    }

    virtual const char * what() { return _msg; }
};



#endif // EMPTYCONTAINER_H
