#pragma once

#include <string>

namespace NVehicle{
    class Vehicle{ //interface
        public:
            virtual void numberWheels() = 0;
            virtual void show() = 0;
            virtual int getYear() = 0;
    };
}