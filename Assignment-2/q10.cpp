#include <iostream>
#include <cmath> 

//1. Abstract Base Class

class Shape {
protected:
   
    double dimension1;

public:
    Shape(double d) : dimension1(d) {}

    virtual double area() const = 0; 
    
    virtual void displayInfo() const {
        std::cout << "--- Calculating Area ---" << std::endl;
    }

    virtual ~Shape() = default;
};

// 2. Derived Class 1: Circle 
class Circle : public Shape {
public:
    Circle(double radius) : Shape(radius) {
        std::cout << "Created Circle with Radius: " << dimension1 << std::endl;
    }

    double area() const override {
        
        return M_PI * dimension1 * dimension1; // Area = π * r²
    }

    void displayInfo() const override {
        std::cout << "Circle (Radius: " << dimension1 << "):";
    }
};

// 3. Derived Class 2: Square
class Square : public Shape {
private:
    double dimension2;

public:
    Square(double side) : Shape(side), dimension2(side) {
        std::cout << "Created Square with Side: " << dimension1 << std::endl;
    }

    double area() const override {
        return dimension1 * dimension2; // Area = side * side
    }

    void displayInfo() const override {
        std::cout << "Square (Side: " << dimension1 << "):";
    }
};

int main() {
    std::cout << "--- Abstract Class Demo ---\n" << std::endl;

    
    Shape* shapes[] = {
        new Circle(5.0),
        new Square(4.0)
    };
    
    std::cout << "\n--- Calculating Areas Polymorphically ---" << std::endl;

    for (Shape* shapePtr : shapes) {
        shapePtr->displayInfo();
        
        std::cout << " Area = " << shapePtr->area() << std::endl;
    }

    for (Shape* shapePtr : shapes) {
        delete shapePtr;
    }

    return 0;
}
