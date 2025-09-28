#include <iostream>
class Rectangle {
private:
    double length;
    double breadth;
public:
    Rectangle(double l, double b) : length(l), breadth(b) {}
    double area() const {
        return length * breadth;
    }
    friend void compareArea(const Rectangle& r1, const Rectangle& r2);
};
void compareArea(const Rectangle& r1, const Rectangle& r2) {
    if (r1.area() > r2.area()) {
        std::cout << "Rectangle 1 has a larger area." << std::endl;
    } else if (r2.area() > r1.area()) {
        std::cout << "Rectangle 2 has a larger area." << std::endl;
    } else {
        std::cout << "Both rectangles have the same area." << std::endl;
    }
}
int main() {
    Rectangle rect1(10.0, 5.0);
    Rectangle rect2(8.0, 6.0);
    compareArea(rect1, rect2);
    return 0;
}