// Create a class Account with private members accountNumber and
// balance. Provide setter and getter methods. In main(), ensure that
// account details can only be accessed through these methods.
#include<iostream>
#include<string>
using namespace std;

class Account{
private:
    int accno;
    float balance;

public:
    void setAccnumber(int no){
        accno=no;
    }

    int  getAccnumber(){
        return accno;
    }

    void setBalance(float b){
        balance=b;
    }

    float getBalance(){
        return balance;
    }
};
int main(){
    Account a;
    a.setAccnumber(25);
    a.setBalance(25000.0);

    cout<<"Account Number: "<<a.getAccnumber()<<endl;
    cout<<"Balance: "<<a.getBalance()<<endl;

    return 0;
}