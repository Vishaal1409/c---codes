#include <iostream>
#include <string>
using namespace std;
class Car{
    private:
    string model;
    double price;
    public:
    Car(string n, double p): model(n), price(p) {
        cout<<"Constructor called for model: "<<model<<endl;
    }
    ~Car(){
        cout<<"Destructor called for model: "<<model<<endl;
    }
};
int main(){
    Car c1("BMW", 50000);
    Car c2("Audi", 60000);
    return 0;
}