#include<iostream>
#include"excephand1.h"

stack::stack()
{
    top=-1;
    size = 2;
    arr = new int[size];
}

stack::stack(int t,int si)
{
    top=t;
    size=si;
    arr = new int[size];
}

stack::~stack()
{
    delete arr;
}

bool stack::isFull()
{
    return top==size-1;
}

bool stack::isEmpty()
{
    return top==-1;
}
void stack::push(int el)
{
    if(isFull())
        throw overException("Stack is full");

    arr[++top]= el;
}

int stack::pop()
{
    if(isEmpty())
        throw underException("Stack underflow");

    return arr[top--];
}

int stack::peek()
{
    if(isEmpty())
        throw underException("Stack is empty");

    return arr[top];
}