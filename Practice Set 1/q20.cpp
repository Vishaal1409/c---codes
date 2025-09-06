#include <iostream>

int main() {
    int num1, num2, gcd;
    std::cout << "Enter two numbers: ";
    std::cin >> num1 >> num2;

    int min_num = (num1 < num2) ? num1 : num2;

    for (int i = min_num; i >= 1; --i) {
        if (num1 % i == 0 && num2 % i == 0) {
            gcd = i;
            break;
        }
    }

    std::cout << "The GCD of " << num1 << " and " << num2 << " is " << gcd << std::endl;

    return 0;
}