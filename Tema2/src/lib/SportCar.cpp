#include <iostream>
#include <cstring>
#include "SportCar.hpp"

using namespace NCar;
using namespace NSportCar;

SportCar::SportCar(int year, char *brand, char* fuel, int maxSpeed): Car(year, brand, fuel){
    this->maxSpeed=maxSpeed;
}

void SportCar::printSpeed(){
    std::cout << "Max Speed" << this->maxSpeed << std::endl;
}

void SportCar::show(){
    Car::show();
    std::cout << "Max Speed:" << this->maxSpeed << std::endl;
}

int SportCar::getYear(){
    return Car::getYear();
}