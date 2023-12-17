#include "Dealership.hpp"
#include "Mutex.hpp"
#include <iostream>
#include <thread>
#include <mutex>

std::mutex mutex;
Dealership dealership(mutex);

int carCountBorrow = 1;
int carCountReturn = 1;

void borrowCarFunction();
void returnCarFunction();

int main() {
    std::thread borrower(borrowCarFunction);
    std::thread returner(returnCarFunction);
    std::thread borrower1(borrowCarFunction);
    std::thread returner1(returnCarFunction);

    borrower.join();
    returner.join();
    borrower1.join();
    returner1.join();

    return 0;
}

void borrowCarFunction() {
    auto car = dealership.borrowCar("name " + std::to_string(carCountBorrow++));
    if (auto sharedCar = car.lock()) {
        std::cout << "Car borrowed: " << sharedCar->getName() << std::endl;
    }
}

void returnCarFunction() {
    auto car = std::make_shared<Car>("name " + std::to_string(carCountReturn++));
    dealership.returnCar(car);
}
