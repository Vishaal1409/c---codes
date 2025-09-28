#include <iostream>

class ClassB;

class ClassA {
private:
    int numA;

public:
    ClassA(int a) : numA(a) {}
    friend int addPrivateMembers(const ClassA&, const ClassB&);
};

class ClassB {
private:
    int numB;

public:
    ClassB(int b) : numB(b) {}
    friend int addPrivateMembers(const ClassA&, const ClassB&);
};

int addPrivateMembers(const ClassA& objA, const ClassB& objB) {
    return objA.numA + objB.numB;
}

int main() {
    ClassA a(10);
    ClassB b(20);
    std::cout << "Sum of private members from two classes: " << addPrivateMembers(a, b) << std::endl;
    return 0;
}