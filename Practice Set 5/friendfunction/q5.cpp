#include <iostream>
using namespace std;
class Point{
    private:
    int x;
    int y;
    public:
    Point(int a, int b) : x(a), y(b) {}
    friend void comparePoints(const Point& p1, const Point& p2);
};
void comparePoints(const Point& p1, const Point& p2){
    int sum1 = p1.x + p1.y;
    int sum2 = p2.x + p2.y;
    if(sum1 > sum2){
        cout << "Point 1 is greater." << endl;
    } else if (sum1 < sum2) {
        cout << "Point 2 is greater." << endl;
    } else {
        cout << "Points are equal." << endl;
    }
}
int main(){
    Point point1(3, 4);
    Point point2(5, 1);
    comparePoints(point1, point2);
    return 0;
}