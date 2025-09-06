#include <iostream>
int main() {
    int num, reversed_num = 0, remainder;
    std::cout << "Enter an integer: ";
    std::cin >> num;

    int original_num = num;

    while (num != 0) {
        remainder = num % 10;
        reversed_num = reversed_num * 10 + remainder;
        num /= 10;
    }

    if (original_num == reversed_num) {
        std::cout << original_num << " is a palindrome." << std::endl;
    } else {
        std::cout << original_num << " is not a palindrome." << std::endl;
    }

    return 0;
}