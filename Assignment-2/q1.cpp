#include <iostream>
#include <vector>
#include <algorithm> 
class SimpleList {
private:
    std::vector<int> data;
public:
    SimpleList() {
        std::cout << "SimpleList initialized." << std::endl;
    }
    void add(int item) {
        data.push_back(item);
        std::cout << "Added " << item << "." << std::endl;
    }
    void remove(int item) {
        auto it = std::remove(data.begin(), data.end(), item);
        if (it != data.end()) {
            data.erase(it, data.end());
            std::cout << "Removed " << item << "." << std::endl;
        } else {
            std::cout << "Error: " << item << " not found in the list." << std::endl;
        }
    }
    size_t size() const {
        return data.size();
    }
    void display() const {
        if (data.empty()) {
            std::cout << "List: [] (Empty)" << std::endl;
            return;
        }
        std::cout << "List: [";
        for (size_t i = 0; i < data.size(); ++i) {
            std::cout << data[i];
            if (i < data.size() - 1) {
                std::cout << ", ";
            }
        }
        std::cout << "]" << std::endl;
    }
    int& operator[](size_t index) {
        if (index >= data.size()) {
            throw std::out_of_range("Index out of bounds");
        }
        return data[index];
    }
};
int main() {
    SimpleList myList;
    myList.add(10);
    myList.add(20);
    myList.add(30);
    myList.add(10); 
    myList.display();
    std::cout << "Current Size: " << myList.size() << std::endl;
    myList.remove(20);
    myList.display(); 
    myList.remove(10); 
    myList.display(); 
    myList.remove(99); 
    try {
        std::cout << "Element at index 0: " << myList[0] << std::endl; 
    } catch (const std::out_of_range& e) {
        std::cerr << "Caught exception: " << e.what() << std::endl;
    }
    std::cout << "Final Size: " << myList.size() << std::endl; 
    return 0;
}