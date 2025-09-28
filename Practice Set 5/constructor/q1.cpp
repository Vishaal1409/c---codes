#include <iostream>
using namespace std;
class Shape{
    private:
    double length;
    double breadth;
    public:
    Shape(){
        length = 0.0;
        breadth = 0.0;
    }
    void display(){
        cout<<"Length: "<<length<<endl;
        cout<<"Breadth: "<<breadth<<endl;
    }
};
int main(){
    Shape s;
    cout<<"Default Constructor Values:"<<endl;
    s.display();
    return 0;
}