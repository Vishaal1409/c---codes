#include<iostream>
using namespace std;
class Rectangle
{
    private:
    int length;
    int breadth;
    public:
    Rectangle(int l,int b)
    {
        length=l;
        breadth=b;
    }
    int area(void)
    {
        cout<<"The area of the rectangle is: "<<length*breadth<<endl;
    }
};
int main()
{
    Rectangle r1(10,5);
    r1.area();
    return 0;
}