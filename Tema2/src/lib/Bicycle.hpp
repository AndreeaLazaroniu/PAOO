
#pragma once
#include "Vehicle.hpp"

namespace NBicycle{
    class Bicycle : public NVehicle::Vehicle {
        private:
            int year;
        public:
            Bicycle(int year);

            void drive();
            void numberWheels() override;
            void show() override;
            int getYear() override;
    };
}
