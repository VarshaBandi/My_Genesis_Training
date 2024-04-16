#ifndef INVALID_H
#define INVALID_H


#include<iostream>
#include<cstring>

class InvalidInputException:public std::exception
{
private:
    char* _msg;
public:
InvalidInputException()=delete;
InvalidInputException(const InvalidInputException& e)
{
    _msg=new char[strlen(e._msg)+1];
    strcpy(_msg,e._msg);
}
InvalidInputException& operator=(const InvalidInputException& e)
{
    _msg=new char[strlen(e._msg)+1];
    strcpy(_msg,e._msg);
     return *this;

}
InvalidInputException(InvalidInputException&& e)
{
    _msg=new char[strlen(e._msg)+1];
    strcpy(_msg,e._msg);
}
InvalidInputException& operator=(InvalidInputException&& e)
{
    _msg=new char[strlen(e._msg)+1];
    strcpy(_msg,e._msg);
     return *this;

}
~InvalidInputException()
{
    delete _msg;
}

explicit InvalidInputException(const char* msg)
{
    _msg=new char[strlen(msg)+1];
    strcpy(_msg,msg);
}

const char* what()
{
    return _msg;
}
};


#endif // INVALID_H
