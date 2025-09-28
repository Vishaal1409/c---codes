#include <iostream>
using namespace std;
class Point{
    private:
    int x;
    int y;
    public:
    Point(int x1, int y1){
        x = x1;
        y = y1;
    }
    Point(const Point &p2){
        x = p2.x;
        y = p2.y;
    }
    void display(){
        cout<<"X: "<<x<<endl;
        cout<<"Y: "<<y<<endl;
    }
};
int main(){
    Point p1(10, 20);
    Point p2 = p1;
    p1.display();
    p2.display();
    return 0;
}