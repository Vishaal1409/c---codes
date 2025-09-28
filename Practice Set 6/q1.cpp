#include <iostream>
class Bank {
private:
    long accountNumber;
    double balance;
    static double interestRate;
public:
    Bank(long acc, double bal) : accountNumber(acc), balance(bal) {}
    void deposit(double amount) {
        if (amount > 0) {
            balance += amount;
        }
    }
    void withdraw(double amount) {
        if (amount > 0 && balance >= amount) {
            balance -= amount;
        }
    }

    friend void applyInterest(Bank& account);
    void display() {
        std::cout << "Account: " << accountNumber << ", Balance: $" << balance << std::endl;
    }
};
double Bank::interestRate = 0.05;
void applyInterest(Bank& account) {
    account.balance += account.balance * Bank::interestRate;
}
int main() {
    Bank myAccount(12345678, 1000.00);
    myAccount.display();
    applyInterest(myAccount);
    std::cout << "After applying interest:" << std::endl;
    myAccount.display();

    return 0;
}