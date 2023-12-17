#include "Dealership.hpp"
#include "Mutex.hpp"
#include <iostream>
#include <thread>
#include <mutex>
#include <chrono>

Dealership::Dealership(std::mutex& mutex) : mutex(mutex){
    cars.push_back(std::make_shared<Car>("name 1"));
    cars.push_back(std::make_shared<Car>("name 2"));
    cars.push_back(std::make_shared<Car>("name 3"));
}

std::weak_ptr<Car> Dealership::borrowCar(const std::string& name) {
    Mutex mutex(this->mutex);
    for (const auto& car : cars) {
        if (car->getName() == name) {
            std::this_thread::sleep_for(std::chrono::seconds(1));
            return car;
        } 
    }
    return std::weak_ptr<Car>(); 
}

void Dealership::returnCar(std::weak_ptr<Car> car) {
    Mutex mutex(this->mutex);
    if (auto sharedCar = car.lock()) { 
        cars.push_back(sharedCar);
        std::this_thread::sleep_for(std::chrono::seconds(1));

        std::cout << "Car returned: " << sharedCar->getName() << std::endl;
    }
}
