#include<iostream>
using namespace std;
class Distance
{
    private:
    int feet;
    int inches;
    public:
    Distance()
    {
        feet=0;
        inches=0;
    }
    Distance(int f)
    {
        feet=f;
        inches=0;
    }
    Distance(int f,int i)
    {
        feet=f;
        inches=i;
    }
    void get()
    {
        cout<<"Feet: "<<feet<<endl;
        cout<<"Inches: "<<inches<<endl;
    }
};
int main()
{
    Distance d1;
    d1.get();
    Distance d2(2);
    d2.get();
    Distance d3(7,3);
    d3.get();
    return 0;   
}