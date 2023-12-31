#pragma once
#include <string>
#include "Car.hpp"

namespace NSportCar{
    class SportCar: public NCar::Car{
        int maxSpeed; //private by default

        public:
            SportCar(int year, char *brand, char* fuel, int maxSpeed);
            void printSpeed();
            void show() override;
            int getYear() override;
    };
}

