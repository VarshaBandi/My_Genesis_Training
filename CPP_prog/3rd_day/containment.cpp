#include<iostream>
#include"containment.h"

int main()
{
    contain1 t1(3,"Bandi");
    contain2 t2(23,t1);
    std::cout<<t2;
}
