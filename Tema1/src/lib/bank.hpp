#pragma once

#include <string>

//class BankAccount
class BankAccount{
    private:
        // Holder's details like name, age, address and account balance
        std::string accountHolder;
        int age;
        char *address;
        double balance;

    public:
        // Constructor
        BankAccount(const std::string, int, char *, double);

        // Copy constructor 
        BankAccount(const BankAccount&);

        // Move constructor
        BankAccount(BankAccount&&);

        // Destructor
        ~BankAccount();

        // Method to deposit units in current bank account; 
        // param ammount represent the units number to be added
        void deposit(double amount);

        // Method to withdraw units from current bank account; 
        // param ammount represent the units number to be withdrew
        void withdraw(double amount);

        // Method to transfer units from current bank account to another; 
        // param ammount represent the units number to be transfered
        // destination is the bank account where the units will be transfered
        void transfer(BankAccount &destination, double amount);
        
        // Method to display the balance of current bank account; 
        void displayBalance() const;
};
