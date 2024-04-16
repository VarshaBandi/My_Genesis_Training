#include<iostream>
#include<algorithm>

template<class T>
void my_find(T arr[],T ele)
{
    int *ptr = std::find(arr,arr+7,ele);
    if(ptr == arr+7)
    {
        //std::cout<<ptr<<"\n";
        std::cout<<"Element not found";
    }
    else{
        int ptr1 = ptr-arr;
        std::cout<<"Element found at index: "<<ptr1;
    }
}

// void my_find(int* start,int*end, int key)
// {
//     while(start!=end)
//     {
//         if(*start == key)
//         {
//             break;
//         }
//         ++start;
//     }
// }

int main()
{
    int arr[]={2,6,1,9,5,32,4};
    //std::cout<<std::end(arr)<<"\n";
    std::cout<<"Enter a element to find: ";
    int ele;
    std::cin>>ele;
    //my_find(arr,ele);

    std::sort(arr,arr+7);
    bool res = std::binary_search(arr,arr+7,ele);
    if(res==false)
    {
        std::cout<<"Element not found";
    }
    else{
        std::cout<<"Found"<<"\n";
        int *p1 = std::upper_bound(arr,arr+7,ele);
        int *p2 = std::lower_bound(arr,arr+7,ele);
        std::cout<<"At index: "<<(p1-1)-arr<<"\n";
    }
    // if(ptr == arr+7)
    // {
    //     std::cout<<"Element not found";
    // }
    // else{
    //     int ptr1 = ptr-arr;
    //     std::cout<<"Element found at index: "<<ptr1;
    // }

}