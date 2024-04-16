#include<iostream>
#include"excephand1.h"

int main()
{
    stack st;

    try
    {
        st.push(10);
        st.push(30);
        st.push(45);
    }
    catch(overException ov)
    {
        std::cout<<ov.what()<<"\n";
    }
    catch(std::exception e)
    {
        std::cout<<e.what()<<"\n";
    }

    try
    {
        std::cout<<st.pop()<<"\n";
        std::cout<<st.pop()<<"\n";
        std::cout<<st.pop()<<"\n";
    }
    catch(underException un)
    {
        std::cout<<un.what()<<"\n";
    }
    catch(...)
    {
        std::cout<<"some error"<<"\n";
    }
    
}