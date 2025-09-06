#include <iostream>
#include <cmath>
int main() {
    std::cout << "Prime numbers between 1 and 100 are: " << std::endl;
    for (int n = 2; n <= 100; ++n) {
        bool is_prime = true;
        for (int i = 2; i <= sqrt(n); ++i) {
            if (n % i == 0) {
                is_prime = false;
                break;
            }
        }
        if (is_prime) {
            std::cout << n << " ";
        }
    }
    std::cout << std::endl;
    return 0;
}