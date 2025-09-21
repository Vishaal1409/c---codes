#include<iostream>
using namespace std;
class Car
{
    private:
    string brand;
    string model;
    int price;
    public:
    Car(string b)
    {
        brand=b;
        model="ND";
        price=0;
    }
    Car(string b, string m)
    {
        brand=b;
        model=m;
        price=0;
    }
    Car(string b,string m, int p)
    {
        brand=b;
        model=m;
        price=p;
    }
    void get()
    {
        cout<<"Brand: "<<brand<<endl;
        cout<<"Model: "<<model<<endl;
        cout<<"Price: "<<price<<endl;
    }
};
int main()
{
    Car c1("Audi");
    c1.get();
    Car c2("Audi", "abc");
    c2.get();
    Car c3("Audi","xyz",1200000);
    c3.get();
    return 0;
}