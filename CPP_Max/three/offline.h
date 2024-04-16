#ifndef OFFLINE_H
#define OFFLINE_H

#include<iostream>
#include"exam.h"

enum examtopic{
    C,DS,Java
};

class offline:public exam
{
    enum examtopic et;
    std::string examlocation;
    std::string loc;
    public:
        offline();
        offline(enum examtopic,std::string);
        void display();
        void changelocation(std::string);
        friend void operator>>(std::istream& is,offline &o);
        friend void operator<<(std::ostream& os,offline &o);

        enum examtopic getEt() const { return et; }
        void setEt(const enum examtopic &et_) { et = et_; }

        std::string getExamlocation() const { return examlocation; }
        void setExamlocation(const std::string &examlocation_) { examlocation = examlocation_; }

        std::string getLoc() const { return loc; }
        void setLoc(const std::string &loc_) { loc = loc_; }
};

#endif // OFFLINE_H
