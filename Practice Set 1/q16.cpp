#include <iostream>
int main() {
    int num, sum = 0, remainder;
    std::cout << "Enter an integer: ";
    std::cin >> num;
    int temp_num = num;
    while (temp_num != 0) {
        remainder = temp_num % 10;
        sum += remainder;
        temp_num /= 10;
    }
    std::cout << "The sum of the digits is: " << sum << std::endl;
    return 0;
}