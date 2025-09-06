#include <iostream>

int main() {
    double principal, rate, time;
    std::cout << "Enter the principal amount: ";
    std::cin >> principal;
    std::cout << "Enter the rate of interest: ";
    std::cin >> rate;
    std::cout << "Enter the time period (in years): ";
    std::cin >> time;

    double simpleInterest = (principal * rate * time) / 100;

    std::cout << "The simple interest is: " << simpleInterest << std::endl;

    return 0;
}