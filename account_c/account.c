#include <stdlib.h>

#include "account.h"

static int count = 0;

struct Account
{
    int balance;
};

Account* new_Account()
{
    count++;
    Account* account = malloc(sizeof(Account));
    account->balance = 0;
    return account;
}

void delete(Account* this)
{
    count--;
    free(this);
}

void deposit(Account* const this, int amount)
{
    this->balance += amount;
}

void withdraw(Account* const this, int amount)
{
    if (this->balance >= amount)
        this->balance -= amount;
}

int getBalance(const Account* const this)
{
    return this->balance;
}

int Account_getCount()
{
    return count;
}
