#include <iostream>
#include <string>

class BankAccount {
private:
   
    std::string accountNumber;
    std::string accountHolder;
    double balance;

public:
    // 1. Constructor Initialization
    BankAccount(const std::string& number, const std::string& holder, double initialBalance = 0.0) 
        : accountNumber(number), accountHolder(holder), balance(0.0) 
    {
       
        std::cout << "--- Account Created ---" << std::endl;
        std::cout << "Account Holder: " << accountHolder << std::endl;
        deposit(initialBalance); 
    }

    // 2. Public Deposit Method
    void deposit(double amount) {
        if (amount > 0) {
            balance += amount;
       
            std::cout << "[SUCCESS] Deposited: $" << amount << ". New balance: $" << balance << std::endl;
        } else {
            std::cout << "[FAILED] Deposit amount must be positive." << std::endl;
        }
    }

    // 3. Public Withdraw Method
    void withdraw(double amount) {
        if (amount <= 0) {
            std::cout << "[FAILED] Withdrawal amount must be positive." << std::endl;
        } 
        // Encapsulation check 1:
        else if (amount > balance) {
            std::cout << "[FAILED] Insufficient funds! Available: $" << balance << std::endl;
        } 
        else {
            balance -= amount;
        
            std::cout << "[SUCCESS] Withdrew: $" << amount << ". New balance: $" << balance << std::endl;
        }
    }

    // 4. Public Display Method
    void display() const {
        std::cout << "\n[Account Status]" << std::endl;
        std::cout << "  Holder: " << accountHolder << std::endl;
        std::cout << "  Number: " << accountNumber << std::endl;
  
        std::cout << "  Balance: $" << balance << std::endl;
    }
};


int main() {
    // 1. Account Creation
    BankAccount myAccount("12345-6789", "Alex Smith", 500.00);
    myAccount.display();

    std::cout << "\n--- Transaction Log ---" << std::endl;

    // 2. Valid Deposit
    myAccount.deposit(150.75);

    // 3. Valid Withdrawal
    myAccount.withdraw(200.00);

    // 4. Invalid Access Attempt 
    std::cout << "\n--- Invalid Access Attempts (Prevented by Encapsulation) ---" << std::endl;
    
    // 5. Invalid Operations 
    myAccount.deposit(-50.00);
    myAccount.withdraw(1000.00);

    // 6. Final Status
    myAccount.display();

    return 0;
}
