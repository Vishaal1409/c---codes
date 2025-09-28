#include <iostream>
class FunctionTracker {
private:
    static int callCount;
public:
    static void incrementAndPrint() {
        callCount++;
        std::cout << "This function has been called " << callCount << " times." << std::endl;
    }
};
int FunctionTracker::callCount = 0;
int main() {
    FunctionTracker::incrementAndPrint();
    FunctionTracker::incrementAndPrint();
    FunctionTracker::incrementAndPrint();
    return 0;
}