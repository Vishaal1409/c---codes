#include <iostream>
#include <cmath>
class Circle {
private:
    double radius;
    static double pi;
public:
    Circle(double r) : radius(r) {}
    static void setPi(double newPi) {
        pi = newPi;
    }
    double area() const {
        return pi * radius * radius;
    }
};
double Circle::pi = 3.14159;
int main() {
    Circle c1(5.0);
    std::cout << "Area with default pi: " << c1.area() << std::endl;
    Circle::setPi(3.14);
    std::cout << "Area with updated pi: " << c1.area() << std::endl;
    return 0;
}
