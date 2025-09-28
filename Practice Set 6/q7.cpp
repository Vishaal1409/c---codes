#include <iostream>
class Counter {
private:
    int count;
    static int totalCount;
public:
    Counter(int c) : count(c) {
        totalCount++;
    }
    static int getTotalCount() {
        return totalCount;
    }
    void display() {
        std::cout << "Object Count: " << count << std::endl;
    }
};
int Counter::totalCount = 0;
int main() {
    Counter c1(1);
    Counter c2(2);
    Counter c3(3);
    std::cout << "Total number of counter objects: " << Counter::getTotalCount() << std::endl;
    return 0;
}