
#pragma once
#include "Vehicle.hpp"

namespace NBicycle{
    class Bicycle : public NVehicle::Vehicle {
        private:
            int year;
        public:
            Bicycle(int year); //constructor

            void drive();
            //overrides of pure virtual methods
            void numberWheels() override;
            void show() override;
            int getYear() override;
    };
}
