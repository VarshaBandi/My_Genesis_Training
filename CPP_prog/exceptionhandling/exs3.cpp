#include<iostream>
#include"ex3.h"

bubble::bubble()
{
    size = 5;
    //int *arr = new int[size];
}

bubble::bubble(int arr[],int s):size(s)
{
    size = s;
    //int *arr = new int[size];
}

void bubble::sort(int a[],int s)
{
    int temp;
    for(int i=0;i<size-1;i++)
    {
        for(int j=0;j<size-1;j++)
        {
            if(arr[j]>arr[j+1])
            {
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}

// void bubble::accept(int arr,int size)
// {
//     for(int i=0;i<size;i++)
//     {
//         std::cin>>arr[i];
//     }
// }

void bubble::display()
{
    for(int i=0;i<size;i++)
    {
        std::cout<<arr[i]<<" ";
    }
}