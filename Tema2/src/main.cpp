# include <cstring>
# include "lib/Car.hpp"
# include "lib/SportCar.hpp"
# include "lib/Vehicle.hpp"
# include <iostream>

using namespace NCar;
using namespace NSportCar;

int main(){
    char *brand = new char[50];
    memcpy(brand, "Ford", 50);
    char *fuel = new char[50];
    memcpy(fuel, "diesel", 50);
    Car cr(2022, brand, fuel);

    cr.show();

    char *brand1 = new char[50];
    memcpy(brand1, "Dacia", 50);
    char *fuel1 = new char[50];
    memcpy(fuel1, "diesel", 50);
    SportCar cr1(2023, brand1, fuel1, 150);

    cr1.show();

    return 0;
}