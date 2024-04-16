#include<iostream>

class bubble
{
    int arr[5]={3,7,1,0,4};
    int size;
    public:
        bubble();
        bubble(int[],int);
        //~bubble(){delete arr;}
        void sort(int[],int);
        //void accept(int[],int);
        void display();

};