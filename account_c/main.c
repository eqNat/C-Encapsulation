#include <stdio.h>

#include "account.h"

int main()
{
	Account* account1 = new_Account();
	Account* account2 = new_Account();
	Account* account3 = new_Account();

	deposit(account1, 40);
	deposit(account2, 50);
	deposit(account3, 60);

	withdraw(account1, 12);
	withdraw(account2, 14);
	withdraw(account3, 16);

	printf("Account1 balance: %d\n", getBalance(account1));
	printf("Account2 balance: %d\n", getBalance(account2));
	printf("Account3 balance: %d\n", getBalance(account3));

	printf("Number of accounts: %d\n", Account_getCount());

	delete(account1);

	printf("Number of accounts after deletion: %d\n", Account_getCount());

	delete(account2);
	delete(account3);
}
