#include <iostream>
#include <cmath> // For sqrt()

int main() {
    double a, b, c;
    std::cout << "Enter coefficients a, b, and c: ";
    std::cin >> a >> b >> c;

    double discriminant = b * b - 4 * a * c;

    if (discriminant > 0) {
        double root1 = (-b + sqrt(discriminant)) / (2 * a);
        double root2 = (-b - sqrt(discriminant)) / (2 * a);
        std::cout << "Real and distinct roots: " << root1 << " and " << root2 << std::endl;
    } else if (discriminant == 0) {
        double root = -b / (2 * a);
        std::cout << "Real and equal roots: " << root << std::endl;
    } else { // discriminant < 0
        double realPart = -b / (2 * a);
        double imaginaryPart = sqrt(-discriminant) / (2 * a);
        std::cout << "Complex roots: " << realPart << " + " << imaginaryPart << "i and " << realPart << " - " << imaginaryPart << "i" << std::endl;
    }

    return 0;
}