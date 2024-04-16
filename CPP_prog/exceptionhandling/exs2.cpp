#include<iostream>
#include"ex2.h"

Account::Account()
{
    balance = 6500;
}

Account::Account(int b):balance(b)
{
    balance = b;
}

int Account::withdraw(int wd)
{
    if(balance-wd<5000)
        throw lowbalexception();

    return balance-wd;
}