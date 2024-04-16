#include<algorithm>
#include<iostream>
#include<string>

template<class T>
T mymax_element(T a,T b)
{
    std::string *ptr = std::max_element(a,b);
    return ptr;
}

template<class T>
void myswap(T start,T end)
{
    for(std::string *i=start;i!=end;i++)
    {
        for(std::string *j=start;j!=end-1;j++)
        {
            if(*i < *j)
            {
                std::swap(*i,*j);
            }
        }
    }
    for(std::string *k=start;k!=end;k++)
         std::cout<<*k;
}
int main()
{
    std::string arr[]={"Varma ","Aman ","Varsha ","Bhagya ","Murali "};
    std::string *start = std::begin(arr);
    std::string *end = std::end(arr);
    std::string *ptr = mymax_element(start,end);
    std::cout<<"Largest element is: "<<*ptr<<"\n";
    myswap(start,end);
    // std::swap(*ptr,*(end-1));
    // for(std::string *ptr1=std::begin(arr);ptr1!=std::end(arr);ptr1++)
    //     std::cout<<*ptr1;

    // for(std::string *ptr1=std::begin(arr);ptr1!=std::end(arr);ptr1++)
    // {
    //     for(std::string *ptr2=std::begin(arr);ptr2!=std::end(arr)-1;ptr2++)
    //     {
    //         if(*ptr1<*ptr2)
    //         {
    //             std::swap(*ptr1,*ptr2);
    //         }
    //     }
    // }
    // for(std::string *ptr1=std::begin(arr);ptr1!=std::end(arr);ptr1++)
    //      std::cout<<*ptr1;
    // int *ptr = std::max_element(arr,arr+3);
    // std::cout<<*ptr<<"\n";
    //std::cout<<ptr-arr;
}