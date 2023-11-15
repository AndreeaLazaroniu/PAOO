#pragma once
#include <string>
#include "Car.hpp"

namespace NSportCar{
    class SportCar: public NCar::Car{
        int maxSpeed;

        public:
            SportCar(int year, char *brand, char* fuel, int maxSpeed);
            void printSpeed();
            void show() override;
            void getYear() override;
    };
}

