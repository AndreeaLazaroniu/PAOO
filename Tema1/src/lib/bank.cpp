#include <iostream>
#include <cstring>
#include "bank.hpp"

// Constructor
BankAccount::BankAccount(const std::string accountHolder, int age, char *address, double balance){
    this->accountHolder=accountHolder;
    this->age=age;
    this->address=address;
    this->balance=balance;
    
    // Print the account that was created
    std::cout << "A bank account was created. Name: " << accountHolder << "; Age: " << age << "; Address: " << address << "; Initial balance: " << balance << std::endl;
}

// Copy constructor
BankAccount::BankAccount(const BankAccount& ba){
    this->accountHolder=ba.accountHolder;
    this->age=age;
    int n = strlen(ba.address);
    this->address = new char[n];
    memcpy(this->address, ba.address, n);
    this->balance=balance;

    // Print the account that was copied
    std::cout << "The " << accountHolder << "'s bank account was copied!" << std::endl;
}

// Move constructor
BankAccount::BankAccount(BankAccount&& prevBankAccount){
    this->accountHolder=prevBankAccount.accountHolder;
    this->age=prevBankAccount.age;
    this->address=prevBankAccount.address;
    delete [] prevBankAccount.address;
    this->balance=prevBankAccount.balance;
    
    // Print the account that was moved
    std::cout << "The " << accountHolder << "'s bank account was moved!" << std::endl;
}


// Destructor
BankAccount::~BankAccount(){
    // deallocate the pointers
    delete [] this->address;
    
    std::cout << "The bank account was deleted!" << std::endl;
}

// Method to deposit units in current bank account
void BankAccount::deposit(double amount) {
    // The amount is added to the current balance
    balance += amount;

    // Print the updated balance
    std::cout << "Deposited " << amount << " units. Current balance for " << accountHolder <<": " << balance << std::endl;
}

// Method to withdraw units from current bank account
void BankAccount::withdraw(double amount) {
    // Check if there are enough units to be withdrew
    // units will be withdrew otherwise a message will be printed
    if (balance >= amount) {
        balance -= amount;
        std::cout << "Withdrawn " << amount << " units. Current balance for " << accountHolder <<": " << balance << std::endl;
    } else {
        std::cout << "Insufficient funds. Current balance for " << accountHolder <<": " << balance << std::endl;
    }
}

// Method to transfer units from current bank account to another
void BankAccount::transfer(BankAccount &destination, double amount) {
    // Check if there are enough units to be transfered
    // units will be transfered and will be added in destination account
    // otherwise a message will be printed
    if (balance >= amount) {
        balance -= amount;
        destination.balance += amount;

        std::cout << "Transferred " << amount << " units to " << destination.accountHolder
                  << ". Current balance for " << accountHolder << ": " << balance
                  << ". Current balance for " << destination.accountHolder << ": " << destination.balance << std::endl;
    } else {
        std::cout << "Insufficient funds for transfer. Current balance: " << balance << std::endl;
    }
}

// Method to display the balance of current bank account;
void BankAccount::displayBalance() const {
    std::cout << "Current balance for account holder " << accountHolder << ": " << balance << std::endl;
}
