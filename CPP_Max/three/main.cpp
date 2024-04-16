#include<iostream>
#include"exam.h"
#include"online.h"
#include"offline.h"

// void avgmarks(int arr[],int n)
// {
//     int sum = 0,avg;
//     for(int i=0;i<n;i++)
//     {
//         sum += arr[i];
//     }
//     avg = sum/5;
//     std::cout<<"Average: "<<avg<<"\n";
// }

int main()
{
    int n,arr[5];
    std::cout<<"Enter n: ";
    std::cin>>n;

    online ol;
    std::cout<<"enter marks:";
    for(int i=0;i<n;i++)
    {
        std::cin>>arr[i];
    }
    ol.avg(arr,n);

    online *on = new online[n];
    std::cin>>on[n];
    std::cout<<on[n];
    int num;
    std::cout<<"Enter num: ";
    std::cin>>num;
    offline *of = new offline[num];
    std::cin>>of[num];
    std::cout<<of[num];

   // std::string newloc;

    of[0].changelocation("telangana");

    std::cout<<of[0].getLoc()<<std::endl;
} 