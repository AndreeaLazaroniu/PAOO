#pragma once

#include <string>
#include "Vehicle.hpp"

namespace NCar{
    class Car: public NVehicle::Vehicle{    
            protected:
                int year;
                char *brand;
                char *fuel;
                int isHighSpeedVehicle;

            public:
                Car(int year, char* brand, char* fuel);
                Car(const Car &cr);
                Car(Car &&prevCar);
                ~Car();
                void numberWheels() override;
                void show() override;
                void getYear() override;
    };

}
