# include <cstring>
# include "lib/Car.hpp"
# include "lib/Vehicle.hpp"
# include <iostream>

using namespace NCar;

int main(){
    char *brand = new char[50];
    memcpy(brand, "Ford", 50);
    char *fuel = new char[50];
    memcpy(fuel, "diesel", 50);
    Car cr(2022, brand, fuel);

    cr.show();

    return 0;
}