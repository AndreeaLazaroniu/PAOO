# include <cstring>
# include "lib/bank.hpp"
# include <iostream>


int main() {
    // Creăm câteva instanțe de cont bancar
    const std::string accountHolder1 = "Luca Marian";
    const std::string accountHolder2 = "Maria Popescu";

    char *address1 = new char[100];
    memcpy(address1, "str Perilor, nr 12, Timisoara, Timis", 100);

    char *address2 = new char[100];
    memcpy(address2, "str Merilor, nr 22, Timisoara, Timis", 100);

    BankAccount account1(accountHolder1, 22, address1, 5000);
    BankAccount account2(accountHolder2, 41, address2, 3000);

    BankAccount account3 = account2; //copy

    BankAccount account4(std::move(account2)); //move

    // Afișăm soldurile inițiale
    std::cout << "Initial Balances:" << std::endl;
    account1.displayBalance();
    account2.displayBalance();
    account3.displayBalance();
    account4.displayBalance();

    // Efectuăm operațiuni pe conturi
    account1.deposit(1000);
    account2.withdraw(500);
    account1.transfer(account2, 200);

    // Afișăm soldurile actualizate
    std::cout << "\nUpdated Balances:" << std::endl;
    account1.displayBalance();
    account2.displayBalance();

    return 0;
}
