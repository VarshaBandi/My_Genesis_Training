#include<iostream>
#include"offline.h"

offline::offline()
{
    loc = "Pune";
}

offline::offline(enum examtopic e,std::string s):
    et(e),examlocation(s)
{
}

void offline::changelocation(std::string s)
{
    setLoc(s);
}

void operator>>(std::istream& is,offline &o)
{
    o.getLoc();
}
void operator<<(std::ostream& os,offline &o)
{
    o.getLoc();
}
void offline::display()
{
    std::cout<<loc;
}
