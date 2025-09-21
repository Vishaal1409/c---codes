#include<iostream>
using namespace std;
class BankAccount
{
    private:
    int acctno;
    int bal;
    public:
    BankAccount()
    {
        acctno=0;
        bal=0;
    }
    BankAccount(int a)
    {
        acctno=a;
        bal=0;
    }
    BankAccount(int a,int b)
    {
        acctno=a;
        bal=b;
    }  
    void get()
    {
        cout<<"Account number is: "<<acctno<<endl;
        cout<<"Balance is: "<<bal<<endl;
    } 
};
int main()
{
    BankAccount b1;
    b1.get();
    BankAccount b2(1237);
    b2.get();
    BankAccount b3(7706,100000);
    b3.get();
    return 0;
}