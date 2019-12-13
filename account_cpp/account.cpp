#include <iostream>

#include "account.h"

int Account::count = 0;

Account::Account()
{
    count++;
    balance = 0;
}

Account::~Account()
{
    count--;
}

void Account::deposit(int amount)
{
    balance += amount;
}

void Account::withdraw(int amount)
{
    if (balance >= amount)
        balance -= amount;
}

int Account::getBalance() const
{
    return balance;
}

int Account::getCount()
{
    return count;
}
