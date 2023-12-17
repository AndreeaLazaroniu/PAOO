#include "Bicycle.hpp"
#include <iostream>

using namespace NBicycle;
Bicycle::Bicycle(int year){
    this->year = year;
}

void Bicycle::drive() {
    std::cout << "Driving a bicycle" << std::endl;
}

void Bicycle::numberWheels() {
    std::cout << "Number of wheels: 2" << std::endl;
}

void Bicycle::show() {
    std::cout << "This is a bicycle from year " << year << std::endl;
}

int Bicycle::getYear() {
    return year;
}