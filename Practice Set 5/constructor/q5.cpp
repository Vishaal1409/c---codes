#include <iostream>
class Complex {
private:
    double real;
    double imag;
public:
    Complex() : real(0.0), imag(0.0) {}
    Complex(double r) : real(r), imag(0.0) {}
    Complex(double r, double i) : real(r), imag(i) {}
    void display() {
        std::cout << "Complex number: " << real << " + " << imag << "i" << std::endl;
    }
};
int main() {
    Complex c1;
    Complex c2(5.0);
    Complex c3(3.0, 4.0);
    c1.display();
    c2.display();
    c3.display();
    return 0;
}