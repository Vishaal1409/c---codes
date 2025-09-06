// Write a class Car with private members brand and model. Provide
// setter and getter methods. In main(), create an array of cars and use
// the methods to assign and print their values.
#include<iostream>
#include<string>
using namespace std;
class Car{
private:
    string brand;
    string model;
public:
    void setBrand(string b){
        brand=b;
    }
    string getBrand(){
        return brand;
    }
    void setModel(string m){
        model=m;
    }
    string getModel(){
        return model;
    }
};
int main(){

    int i,n;
    cout<<"Enter number of cars";
    cin>>n;
    Car c[n];
    cout<<"CAR DETAILS"<<endl;
    for(i=0;i<2;i++){
        string model;
        string brand;
        cout<<"Car "<<(i+1)<<" details: "<<endl;

        cout<<"Brand: ";
        cin>>brand;
        c[i].setBrand(brand);

        cout<<"Model: ";
        cin>>model;
        c[i].setModel(model);
    }
    cout << "\n===== CAR DETAILS =====\n";
    for (int i = 0; i < n; i++) {
        cout << "Car " << (i + 1) << " -> ";
        cout << "Brand: " << c[i].getBrand() << ", ";
        cout << "Model: " << c[i].getModel() << endl;
    }

    return 0;
}