#include <iostream>
using namespace std;
class ClassY;
class ClassX{
    private:
    int valX;
    public:
    ClassX(int a) : valX(a) {}
    friend int addValues(const ClassX&, const ClassY&);
};
class ClassY{
    private:
    int valY;
    public:
    ClassY(int b) : valY(b){}
    friend int addValues(const ClassX&, const ClassY&);
};
int addValues(const ClassX& objX, const ClassY& objY){
    return objX.valX + objY.valY;
}
int main(){
    ClassX x(15);
    ClassY y(25);
    cout << "Sum of private members from two classes: " << addValues(x,y) << endl;
    return 0;
}