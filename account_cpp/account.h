#pragma once

class Account
{
    private:
        int balance;
        static int count;

    public:
        // constructor and destructor
        Account();
        ~Account();

        // transformer member functions
        void deposit(int amount);
        void withdraw(int amount);

        // observer member fuctions
        int getBalance() const;
        static int getCount();
};
