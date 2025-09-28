#include <iostream>
using namespace std;
class MyClass{
    public:
    static int count;
    MyClass(){
        count++;
    }
    ~MyClass(){
        count--;
    }
};
int MyClass::count = 0;
int main() {
    MyClass obj1;
    MyClass obj2;
    cout << "Current object count: " << MyClass::count << endl;
    {
        MyClass obj3;
        cout << "Current object count: " << MyClass::count << endl;
    }
    cout << "Current object count: " << MyClass::count << endl;
    return 0;
}