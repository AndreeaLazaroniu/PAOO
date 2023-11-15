#pragma once

#include <string>

namespace NVehicle{
    class Vehicle{
        public:
            virtual void numberWheels() = 0;
            virtual void show() = 0;
            virtual void getYear() = 0;
    };
}