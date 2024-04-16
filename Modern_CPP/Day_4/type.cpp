#include<iostream>
#include<vector>

int main()
{
    auto ptr2 = new int[5]; //integer pointer
    auto ptr2 = new int[3][4]; //pointer to an array of 4
    auto ptr2 = new int*[5]; //array of pointers
    
    int *p[4]; //arrray of pointers
    auto ptr5 = p;
    int (*pa)[4]; //pointer to array
}