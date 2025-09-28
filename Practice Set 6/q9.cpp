#include <iostream>
#include <string>
class Vehicle {
protected:
    std::string brand;
public:
    Vehicle(std::string b) : brand(b) {}
    void displayBrand() {
        std::cout << "Brand: " << brand << std::endl;
    }
};
class Car : public Vehicle {
private:
    std::string model;
    double price;
public:
    Car() : Vehicle("Unknown"), model("N/A"), price(0.0) {}
    Car(std::string b, std::string m) : Vehicle(b), model(m), price(0.0) {}
    Car(std::string b, std::string m, double p) : Vehicle(b), model(m), price(p) {}
    void displayCarDetails() {
        displayBrand();
        std::cout << "Model: " << model << ", Price: $" << price << std::endl;
    }
};
int main() {
    Car car1("Ford", "Mustang");
    Car car2("BMW", "X5", 65000.0);
    car1.displayCarDetails();
    car2.displayCarDetails();
    return 0;
}