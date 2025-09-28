#include <iostream>
using namespace std;
class MyClass{
    private:
    int val1;
    int val2;
    public:
    MyClass(){
        val1 = 0;
        val2 = 0;
    }
    MyClass(int v){
        val1 = v;
        val2 = 0;
    }
    MyClass(int v1, int v2){
        val1 = v1;
        val2 = v2;
    }
    void display(){
        cout<<"Value 1: "<<val1<<endl;
        cout<<"Value 2: "<<val2<<endl;
    }
};
int main(){
    MyClass obj1;
    MyClass obj2(10);
    MyClass obj3(20, 30);
    cout<<"Object 1:"<<endl;
    obj1.display();
    cout<<"Object 2:"<<endl;
    obj2.display();
    cout<<"Object 3:"<<endl;
    obj3.display();
    return 0;
}