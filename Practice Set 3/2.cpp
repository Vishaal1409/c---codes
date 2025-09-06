// Define a class BankAccount with a private member balance. Provide
// methods setBalance() and getBalance() to update and view the
// balance. Ensure that negative values cannot be assigned.
#include<iostream>
#include<string>
using namespace std;
class BankAccount{
private:
    float balance;

public:
    void setBalance(float b){
        if(b>=0){
            balance=b;
        }
        else{
            cout<<"INVALID BALANCE!SETTING BALANCE TO 0"<<endl;
            balance=0;
        }
    }
    float getBalance(){
        return balance;
    }
};
int main(){
    BankAccount b;
    b.setBalance(5000.0);
    cout<<"Balance: "<<b.getBalance()<<endl;
    b.setBalance(-200.0);
    cout<<"Balance: "<<b.getBalance()<<endl;
    return 0;
}