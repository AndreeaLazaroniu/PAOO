#include <string>

class Car {
    public:
        Car(const std::string& name);
        std::string getName() const;

    private:
        std::string name;
};