#include "Car.hpp"
#include <vector>
#include <memory>
#include "Mutex.hpp"

class Dealership {
public:
    Dealership(std::mutex& mutex);
    std::weak_ptr<Car> borrowCar(const std::string& name);
    void returnCar(std::weak_ptr<Car> car);

private:
    std::vector<std::shared_ptr<Car> > cars;
    std::mutex& mutex;
};

