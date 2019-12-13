#include <malloc.h>

#include "account.h"

struct Account
{
    int balance;
};

static int count = 0;

struct Account* new_Account()
{
    count++;
    struct Account* new_account = malloc(sizeof(struct Account));
    new_account->balance = 0;
    return new_account;
}

void delete(struct Account* this)
{
    count--;
    free(this);
}

void deposit(struct Account* const this, int amount)
{
    this->balance += amount;
}

void withdraw(struct Account* const this, int amount)
{
    if (this->balance >= amount)
        this->balance -= amount;
}

int getBalance(const struct Account* const this)
{
    return this->balance;
}

int Account_getCount()
{
    return count;
}
