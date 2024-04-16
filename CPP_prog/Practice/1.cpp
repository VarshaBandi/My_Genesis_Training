#include<iostream>
#include<cstring>

int main()
{
    char str[30]="learning cpp at kpit";
    int len = strlen(str);
    std::cout<<"\n len= "<<std::endl; 
    int num1,num2;
    std::cout<<"Enter 2 numbers: "<<std::endl;
    std::cin>>num1>>num2;
    int sum=num1+num2;
    std::cout<<"\naddition of 2 numbes = "<<sum<<std::endl;

}