#include<iostream>
#include<cstring>
class Employee
{
    std::string name;
    int salary;
    public:
        Employee(){};
        Employee(std::string n,int s):name(n),salary(s)
        {

        }
        void display()
        {
            std::cout<<"\nName:"<<name<<" salary:"<<salary<<std::endl;
        }
        friend std::ostream& operator<<(std::ostream &os,Employee &e)
        {
            os<<"\n"<<e.name<<" "<<e.salary<<std::endl;
            return os;
        }
};

template<class T>
class Stack
{
    int top;
    int size;
    T *arr;
    public:
        Stack();
        Stack(T);
        bool isEmpty();
        bool isFull();
        void push(T);
        T pop();
        T peek();
};
template<class T>
Stack<T>::Stack()
{
    top=-1;
    size=2;
    arr=new T[size];
}

template<class T>
Stack<T>::Stack(T s)
{
    top=-1;
    size=s;
    arr=new T[size];

}

template<class T>
bool Stack<T>::isEmpty()
{
    return top==-1;
}

template<class T>
bool Stack<T>::isFull()
{
    return top==size-1;
}

template<class T>
void Stack<T>::push(T ele)
{
    if(isFull())
        throw "\nstack overflow";

    std::cout<<"\npush exec";
    arr[++top]=ele;
}

template<class T>
T Stack<T>::pop()
{
    if(isEmpty())
        throw "\nstack underflow";

    return arr[top--];
}

template<class T>
T Stack<T>::peek()
{
    if(isEmpty())
        throw "\nstack underflow";
        
    return arr[top];
}