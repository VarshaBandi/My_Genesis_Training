#include<iostream>
#include<algorithm>
#include<cstring>

template<class T>
void my_count(T a,char ele)
{
    int ptr = std::count(std::begin(a),std::end(a),ele);
    if(ptr==0)
    {
        std::cout<<"Element not found";
    }
    else
    {
        std::cout<<"Element found with count: "<<ptr<<"\n";
    }
}

int main()
{
    int arr[]={2,5,1,9,5,2,4};
    std::cout<<"Enter a element to count: ";
    int ele;
    std::cin>>ele;
    //my_count(arr,ele);
    int *p1 = std::upper_bound(arr,arr+7,ele);
    int *p2 = std::lower_bound(arr,arr+7,ele);
    std::cout<<p1<<"\n";
    std::cout<<p2<<"\n";
    std::cout<<p1-p2<<"\n";

    // char s[]="Hello";
    // std::cout<<"Enter a character to count: ";
    // char ele;
    // std::cin>>ele;
    // my_count(s,ele);

    // std::string s = "Hi I'm Varsha";
    // std::cout<<"Enter a element to count: ";
    // char ele;
    // std::cin>>ele;
    // //std::string str = strlen(s);
    // my_count(s,ele);
}