// Implement a class Circle with a private data member radius. Provide
// setters and getters, and an additional method getArea() that uses the
// getter to calculate the area.
#include<iostream>
using namespace std;
class Circle{
private:
    float radius;
public:
    void setRadius(float r){
        radius=r;
    }
    float getRadius(){
        return radius;
    }
    float getArea(){
        float r=getRadius();
        return 3.14f*r*r;
    }
};
int main(){
    Circle c;
    float radius;
    cout<<"Enter the radius of the circle:";
    cin>>radius;
    c.setRadius(radius);
    cout<<"Radius: "<<c.getRadius()<<endl;
    cout<<"Area: "<<c.getArea()<<endl;
    return 0;
}