#pragma once

#include <string>

class BankAccount{
    private:
        std::string accountHolder;
        int age;
        char *address;
        double balance;

    public:
        BankAccount(const std::string, int, char *, double);
        BankAccount(const BankAccount&);
        BankAccount(BankAccount&&);
        ~BankAccount();

        void deposit(double amount);
        void withdraw(double amount);
        void transfer(BankAccount &destination, double amount);
        void displayBalance() const;
};
