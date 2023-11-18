#include <iostream>
#include <cstring>
#include "Car.hpp"

using namespace NCar;

Car::Car(int year, char* brand, char* fuel){
    std::cout<<"I was created"<<std::endl;

    this->year=year;
    this->brand=brand;
    this->fuel=fuel;
}

Car::Car(const Car &cr){
    std::cout<<"I was copied"<<std::endl;

    this->year=cr.year;
    this->brand = new char[strlen(cr.brand)+1];
    memcpy(this->brand, cr.brand, strlen(cr.brand)+1);
    this->fuel = new char[strlen(cr.fuel)+1];
    memcpy(this->fuel, cr.fuel, strlen(cr.brand)+1);
}

Car::Car(Car &&prevCar){
    std::cout<<"I was moved"<<std::endl;
    
    this->year=prevCar.year;
    this->brand=prevCar.brand;
    delete [] prevCar.brand;
    this->fuel=prevCar.fuel;
    delete [] prevCar.fuel;
}

Car::~Car(){
    std::cout << "I was deleted" << std::endl;
    delete [] this->brand;
    delete [] this->fuel;
}

void Car::numberWheels(){
    std::cout << "Number of Wheels: 4" << std::endl;
}

void Car::show(){
    std::cout <<"Brand:" << this->brand << "\nYear: " << this->year << "\nFuel: " << this->fuel << std::endl;
}

int Car::getYear(){
    return this->year;
}

void Car::showYear(){
    std::cout << "Year: " << this->year << std::endl;
}

Car& Car::operator=(const Car& cr) {
    std::cout << "I was copy assigned" << std::endl;

    if (this == &cr) {
        return *this;
    }

    this->year = cr.year;

    delete[] this->brand;
    this->brand = new char[strlen(cr.brand) + 1];
    memcpy(this->brand, cr.brand, strlen(cr.brand) + 1);

    delete[] this->fuel;
    this->fuel = new char[strlen(cr.fuel) + 1];
    memcpy(this->fuel, cr.fuel, strlen(cr.fuel) + 1);

    return *this;
}

Car& Car::operator=(Car&& prevCar) {
    std::cout << "I was move assigned" << std::endl;

    if (this == &prevCar) {
        return *this;
    }

    this->year = prevCar.year;

    delete[] this->brand;
    this->brand = prevCar.brand;
    prevCar.brand = nullptr;

    delete[] this->fuel;
    this->fuel = prevCar.fuel;
    prevCar.fuel = nullptr;

    return *this;
}
