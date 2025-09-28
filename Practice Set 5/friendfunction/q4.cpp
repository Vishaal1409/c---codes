#include <iostream>
class ClassD;
class ClassC {
private:
    int numC;
public:
    ClassC(int c) : numC(c) {}
    void display() { std::cout << "ClassC's value: " << numC << std::endl; }
    friend void swapPrivateMembers(ClassC&, ClassD&);
};
class ClassD {
private:
    int numD;
public:
    ClassD(int d) : numD(d) {}
    void display() { std::cout << "ClassD's value: " << numD << std::endl; }
    friend void swapPrivateMembers(ClassC&, ClassD&);
};
void swapPrivateMembers(ClassC& c, ClassD& d) {
    int temp = c.numC;
    c.numC = d.numD;
    d.numD = temp;
}
int main() {
    ClassC objC(10);
    ClassD objD(20);
    std::cout << "Before swap:" << std::endl;
    objC.display();
    objD.display();
    swapPrivateMembers(objC, objD);
    std::cout << "\nAfter swap:" << std::endl;
    objC.display();
    objD.display();
    return 0;
}