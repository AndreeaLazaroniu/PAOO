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
    std::cout<<"I was deleted"<<std::endl;
    delete [] this->brand;
    delete [] this->fuel;
}

void Car::numberWheels(){
    std::cout<<"4"<<std::endl;
}

void Car::show(){
    std::cout<<"brand:" <<this->brand<<std::endl;
}

void Car::getYear(){
    std::cout<<"Year"<<this->year<<std::endl;
}