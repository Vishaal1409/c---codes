#include <iostream>
int main() {
    int num, reversed_num = 0, remainder;
    std::cout << "Enter an integer: ";
    std::cin >> num;
    int temp_num = num;
    while (temp_num != 0) {
        remainder = temp_num % 10;
        reversed_num = reversed_num * 10 + remainder;
        temp_num /= 10;
    }
    std::cout << "The reversed number is: " << reversed_num << std::endl;
    return 0;
}