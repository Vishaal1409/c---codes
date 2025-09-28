#include <iostream>
class BankAccount {
private:
    double balance;
    static double interestRate;
public:
    BankAccount(double b) : balance(b) {}
    static void setInterestRate(double rate) {
        interestRate = rate;
    }
    static double getInterestRate() {
        return interestRate;
    }
    void display() {
        std::cout << "Balance: $" << balance << ", Interest Rate: " << interestRate << "%" << std::endl;
    }
};
double BankAccount::interestRate = 3.5;
int main() {
    BankAccount account1(1000);
    BankAccount account2(2000);
    account1.display();
    account2.display();
    BankAccount::setInterestRate(4.0);
    std::cout << "\nInterest rate updated to " << BankAccount::getInterestRate() << "%" << std::endl;
    account1.display();
    account2.display();
    return 0;
}