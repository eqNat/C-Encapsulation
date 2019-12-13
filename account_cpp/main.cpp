#include <iostream>

#include "account.h"

int main()
{
    Account* account1 = new Account();
    Account* account2 = new Account();
    Account* account3 = new Account();

    account1->deposit(40);
    account2->deposit(50);
    account3->deposit(60);

    account1->withdraw(12);
    account2->withdraw(14);
    account3->withdraw(16);

    std::cout << "Account1 balance: " << account1->getBalance() << std::endl;
    std::cout << "Account2 balance: " << account2->getBalance() << std::endl;
    std::cout << "Account3 balance: " << account3->getBalance() << std::endl;

    std::cout << "Number of accounts: " << Account::getCount() << std::endl;

    delete account1;

    std::cout << "Number of accounts after deletion: " << Account::getCount() << std::endl;

    delete account2;
    delete account3;
}
