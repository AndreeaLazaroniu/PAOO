#include <iostream>
#include <cstring>
#include "bank.hpp"

//Constructor
BankAccount::BankAccount(const std::string accountHolder, int age, char *address, double balance){
    this->accountHolder=accountHolder;
    this->age=age;
    this->address=address;
    this->balance=balance;
    
    std::cout << "A bank account was created. Name: " << accountHolder << "; Age: " << age << "; Address: " << address << "; Initial balance: " << balance << std::endl;
}

//Copy constructor
BankAccount::BankAccount(const BankAccount& ba){
    this->accountHolder=ba.accountHolder;
    this->age=age;
    int n = strlen(ba.address);
    this->address = new char[n];
    memcpy(this->address, ba.address, n);
    this->balance=balance;

    std::cout << "The " << accountHolder << "'s bank account was copied!" << std::endl;
}

//move constructor
BankAccount::BankAccount(BankAccount&& prevBankAccount){
    this->accountHolder=prevBankAccount.accountHolder;
    this->age=prevBankAccount.age;
    this->address=prevBankAccount.address;
    delete [] prevBankAccount.address;
    this->balance=prevBankAccount.balance;
    
    std::cout << "The " << accountHolder << "'s bank account was moved!" << std::endl;
}


//destructor
BankAccount::~BankAccount(){
    delete [] this->address;
    
    std::cout << "The bank account was deleted!" << std::endl;
}

//metodă de depunere a unei sume în cont
void BankAccount::deposit(double amount) {
    balance += amount;
    std::cout << "Deposited " << amount << " units. Current balance: " << balance << std::endl;
}

//metodă de retragere a unei sume din cont
void BankAccount::withdraw(double amount) {
    if (balance >= amount) {
        balance -= amount;
        std::cout << "Withdrawn " << amount << " units. Current balance: " << balance << std::endl;
    } else {
        std::cout << "Insufficient funds. Current balance: " << balance << std::endl;
    }
}

//metodă de transfer a unei sume din cont
void BankAccount::transfer(BankAccount &destination, double amount) {
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

//metodă de afișsare al soldului curent din cont
void BankAccount::displayBalance() const {
    std::cout << "Current balance for account holder " << accountHolder << ": " << balance << std::endl;
}
