#include<iostream>
#include<algorithm>
#include<vector>
#include<string>
#include<list>

void display(std::list<std::string> &l)
{
    for(std::string i:l)
        std::cout<<i<<" ";
}
int main()
{
    std::list<std::string> l={"Ram"};

    l.push_back("Varsha");
    l.push_front("Bhagya");
    l.push_back("Varma");
    l.push_back("Aman");
    l.push_back("Ravi");
    display(l);

    std::list<std::string>::iterator it = std::max_element(std::begin(l),std::end(l));
    std::cout<<*it<<"\n";
    // std::sort(std::begin(l),std::end(l));
    l.sort();
    display(l);

}