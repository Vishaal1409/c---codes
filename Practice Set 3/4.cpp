// Create a class Rectangle with private data members length and width.
// Write setter and getter methods and calculate the area using them.
#include<iostream>
using namespace std;
class Rectangle{
private:
    int length;
    int width;
public:
    void setLength(int l){
        length=l;
    }
    int getLength(){
        return length;
    }
    void setWidth(int w){
        width=w;
    }
    int getWidth(){
        return width;
    }
    int getArea(){
        return length*width;
    }
};
int main(){
    Rectangle r;
    int l,w;

    cout<<"Enter the length:";
    cin>>l;
    r.setLength(l);

    cout<<"Enter the width:";
    cin>>w;
    r.setWidth(w);

    cout<<"Length:"<<r.getLength()<<endl;
    cout<<"Width:"<<r.getWidth()<<endl;
    cout<<"Area:"<<r.getArea()<<endl;
    return 0;
}