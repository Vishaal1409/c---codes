#include<iostream>
using namespace std;
class Complex
{
    private:
    int real;
    int imag;
    public:
    Complex()
    {
        real=0;
        imag=0;
    }
    Complex(int r)
    {
        real=r;
        imag=0;
    }
    Complex(int r,int i)
    {
        real=r;
        imag=i;
    }
    void get()
    {
        cout<<"Complex number is: "<<real<<" + "<<imag<<"i"<<endl;
    }
};
int main()
{
    Complex c1;
    c1.get();
    Complex c2(1);
    c2.get();
    Complex c3(2,7);
    c3.get();
    return 0;
}