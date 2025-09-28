#include <iostream>
class DynamicArray {
private:
    int* data;
    int size;
public:
    DynamicArray(int s) {
        size = s;
        data = new int[size];
        std::cout << "Constructor: Dynamically allocated " << size << " integers." << std::endl;
    }
    ~DynamicArray() {
        delete[] data;
        std::cout << "Destructor: Deallocated dynamic memory." << std::endl;
    }
};
int main() {
    DynamicArray arr(5);
    return 0;
}