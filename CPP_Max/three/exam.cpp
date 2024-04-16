#include<iostream>
#include<cstring>
#include"exam.h"

exam::exam()
{
    time = 10;
    examcode = "KPIT";
}

exam::exam(std::string s,int t):
    examcode(s),time(t)
{
    time = t;
    examcode = s;
}