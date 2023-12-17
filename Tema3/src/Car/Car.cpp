#include "Car.hpp"

Car::Car(const std::string& name) : name(name) {}

std::string Car::getName() const {
    return name;
}
