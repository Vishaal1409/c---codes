#include<iostream>
using namespace std;
class Fraction
{
    private:
    int numerator;
    int denominator;
    public:
    Fraction()
    {
        numerator=0;
        denominator=1;
    }
    Fraction(int n)
    {
        numerator=n;
        denominator=1;
    }
    Fraction(int n,int d)
    {
        numerator=n;
        denominator=d;
        reduce();
    }
    int gcd(int a, int b)
{
    int temp;
    int min=0;
    if (a>b)
    {
        min=b;
    }
    else
    {
        min=a;
    }
    for (int i=1;i<=min;i++)
    {
        if (a%i==0 && b%i==0)
        {
            temp=i;
        }
    }
    return temp;
}
    void reduce()
    {
        int simple=gcd(numerator, denominator);
        numerator/=simple;
        denominator/=simple;
    }
    void get()
    {
        cout<<"Fraction: "<<numerator<<"/"<<denominator<<endl;
    }
};
int main()
{
    Fraction f1;
    f1.get();
    Fraction f2(12,6);
    cout<<"Fraction in its simplest form: "<<endl;
    f2.get();
    return 0;
}
