#include <iostream>
#include <string>

//Base Class
class Shape {
protected:
    double width;
    double height;

public:
    virtual ~Shape() {
        std::cout << "Shape destructor called." << std::endl;
    }
    // Constructor to initialize base dimensions
    Shape(double w = 0.0, double h = 0.0) : width(w), height(h) {}

    // Pure Virtual Functions (Interface):.
    virtual double calculateArea() const = 0;
    virtual double calculatePerimeter() const = 0;
    void printDimensions() const {
        std::cout << "  Dimensions: Width = " << width 
                  << ", Height = " << height << std::endl;
    }
};

//Derived Class: 
class Rectangle : public Shape {
public:
    // Constructor: 
    Rectangle(double w, double h) : Shape(w, h) {
        std::cout << "Rectangle object created." << std::endl;
    }

    // Override 1: 
    double calculateArea() const override {
        return width * height;
    }

    // Override 2: 
    double calculatePerimeter() const override {
        return 2 * (width + height);
    }

    // Destructor for the derived class
    ~Rectangle() override {
        std::cout << "Rectangle destructor called." << std::endl;
    }
};

int main() {
    std::cout << "--- Single Inheritance Demo (Shape -> Rectangle) ---" << std::endl;

    // Create an object of the derived class
    Rectangle rect(10.5, 5.0);
    std::cout << "\nRectangle Information:" << std::endl;

    // 1. Call inherited method 
    rect.printDimensions();

    // 2. Call specialized method 
    double area = rect.calculateArea();
    std::cout << "  Area: " << area << std::endl;

    // 3. Call specialized method
    double perimeter = rect.calculatePerimeter();
    std::cout << "  Perimeter: " << perimeter << std::endl;
    
    std::cout << "\n---------------------------------------------------" << std::endl;
    Shape* shapePtr = new Rectangle(7.0, 3.0);
    std::cout << "\nPolymorphic Call (via Shape*):" << std::endl;
    std::cout << "  Area: " << shapePtr->calculateArea() << std::endl; 
    // Clean up memory
    delete shapePtr; 
    return 0;
}
