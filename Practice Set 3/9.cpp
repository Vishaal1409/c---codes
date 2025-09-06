// Write a class Temperature with a private member celsius. Provide
// setCelsius() and getFahrenheit() methods to convert the stored
// temperature to Fahrenheit.
#include<iostream>
using namespace std;
class Temperature{
private:
    float celsius;
public:
    void setCelsius(float c){
        celsius = c;
    }
    float getFahrenheit(){
        return (celsius*9.0/5.0)+32.0;
    }
};
int main(){
    Temperature t;
    float c;
    cout << "Enter temperature in Celsius: ";
    cin >> c;

    t.setCelsius(c);

    cout << "Temperature in Fahrenheit: " << t.getFahrenheit() << " °F" << endl;

    return 0;
}