#include <iostream>
using namespace std;
#include <iostream>
using namespace std;

class ClassA;
class ClassB;

int calculatedArea(const ClassA&, const ClassB&);

class ClassB{
    private:
    int valB;
    public:
    ClassB(int a) : valB(a){}
    friend int calculatedArea(const ClassA&, const ClassB&);
};

class ClassA{
    private:
    int valA;
    public:
    ClassA(int b) : valA(b){}
    friend int calculatedArea(const ClassA&, const ClassB&);
};

int calculatedArea(const ClassA& objA, const ClassB& objB){
    return objA.valA * objB.valB;
}
int main(){
    ClassA a(10);
    ClassB b(20);
    cout << "Area of rectangle: " << calculatedArea(a,b) << endl;
    return 0;
}