#include <iostream>
class Complex {
private:
    double real;
    double imag;
public:
    Complex(double r, double i) : real(r), imag(i) {}
    void display() const {
        std::cout << "Complex Number: " << real << " + " << imag << "i" << std::endl;
    }
    friend Complex addComplex(const Complex& c1, const Complex& c2);
};
Complex addComplex(const Complex& c1, const Complex& c2) {
    return Complex(c1.real + c2.real, c1.imag + c2.imag);
}
int main() {
    Complex num1(2.5, 3.5);
    Complex num2(1.5, 4.5);

    Complex sum = addComplex(num1, num2);
    sum.display();
    return 0;
}