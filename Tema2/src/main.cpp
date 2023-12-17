# include <cstring>
# include "lib/Car.hpp"
# include "lib/SportCar.hpp"
# include "lib/Vehicle.hpp"
# include "lib/Bicycle.hpp"
# include <iostream>

using namespace NCar;
using namespace NSportCar;
using namespace NVehicle;
using namespace NBicycle;

int main(){
    char *brand1 = new char[50];
    memcpy(brand1, "Ford", 50);
    char *fuel1 = new char[50];
    memcpy(fuel1, "gasoline", 50);
    Car ford(2022, brand1, fuel1);

    char *brand2 = new char[50];
    memcpy(brand2, "audi", 50);
    char *fuel2 = new char[50];
    memcpy(fuel2, "diesel", 50);
    Car audi(2008, brand2, fuel2);

    char *brand3 = new char[50];
    memcpy(brand3, "renault", 50);
    char *fuel3 = new char[50];
    memcpy(fuel3, "gasoline", 50);
    Car renault(2014, brand3, fuel3);

    ford.show();
    audi.show();
    renault.show();

    Car ford_1 = ford;
    char *brand_fiesta = new char[50];
    memcpy(brand_fiesta, "ford fiesta", 50);
    ford_1.setBrand(brand_fiesta);
    char *fuel_ford = new char[50];
    memcpy(fuel_ford, "diesel", 50);
    ford_1.setFuel(fuel_ford);
    ford_1.setYear(2020);
    ford_1.show();
    ford.show();
    std::cout<< "\n"<<std::endl;

    Car ford_2 = std::move(ford); //move constructor

    char *brand_new = new char[50];
    memcpy(brand_new, "dacia", 50);
    char *fuel_new = new char[50];
    memcpy(fuel_new, "diesel", 50);
    Car audi_asg(2018, brand_new, fuel_new); //copy constructor
    audi_asg.show();
    audi_asg = ford; //copy assignment
    audi_asg.show();
    audi_asg = std::move(renault); //move assignment
    audi_asg.show();

    Bicycle bc(2015);
    bc.drive();
    bc.numberWheels();

    std::cout<<"\n"<<std::endl;

    char *brand_aux = new char[50];
    memcpy(brand_aux, "Tesla", 50);
    char *fuel_aux = new char[50];
    memcpy(fuel_aux, "gasoline", 50);
    Car car_aux(2017, brand_aux, fuel_aux);
    Vehicle& carx = car_aux;
    carx.show();
    car_aux.show();

    char *brand_x = new char[50];
    memcpy(brand_x, "sport car", 50);
    char *fuel_x = new char[50];
    memcpy(fuel_x, "diesel", 50);
    SportCar sCar(2023, brand_x, fuel_x, 200);
    Vehicle& sCarx = sCar;
    Car& sCarx1 = sCar;

    sCarx.show();
    sCar.show();
    sCar.printSpeed();
    return 0;
}