#include <iostream>
class ScopedObject {
public:
    ScopedObject() {
        std::cout << "ScopedObject created." << std::endl;
    }

    ~ScopedObject() {
        std::cout << "ScopedObject destroyed." << std::endl;
    }
};
void createObjectInBlock() {
    std::cout << "Entering the block..." << std::endl;
    ScopedObject obj;
    std::cout << "Exiting the block..." << std::endl;
}
int main() {
    std::cout << "Calling the function..." << std::endl;
    createObjectInBlock();
    std::cout << "Function call finished." << std::endl;
    return 0;
}