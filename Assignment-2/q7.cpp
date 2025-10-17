#include <iostream>
#include <vector>
#include <algorithm> 
class ArraySorter {
private:
    std::vector<int> data;

public:
    // Constructor
    ArraySorter() {
        std::cout << "ArraySorter object initialized." << std::endl;
    }

    // Method 1: Inputting data
    void inputData() {
        int size;
        std::cout << "\nEnter the number of elements to sort: ";
        std::cin >> size;

        if (size <= 0) {
            std::cout << "Invalid size. Exiting input." << std::endl;
            return;
        }

        data.resize(size);
        std::cout << "Enter " << size << " integers:\n";
        for (int i = 0; i < size; ++i) {
            std::cout << "Element [" << i + 1 << "]: ";
            std::cin >> data[i];
        }
    }

    // Method 2: Displaying data
    void display() const {
        if (data.empty()) {
            std::cout << "The list is empty." << std::endl;
            return;
        }

        std::cout << "Current Array: [";
        for (size_t i = 0; i < data.size(); ++i) {
            std::cout << data[i];
            if (i < data.size() - 1) {
                std::cout << ", ";
            }
        }
        std::cout << "]" << std::endl;
    }

    // Method 3: Sorting data 
    void insertionSort() {
        if (data.size() <= 1) {
            std::cout << "Array has 0 or 1 element, already sorted." << std::endl;
            return;
        }

        int n = data.size();
        std::cout << "\nStarting Insertion Sort..." << std::endl;

        for (int i = 1; i < n; ++i) {
            int key = data[i]; 
            int j = i - 1;

            while (j >= 0 && data[j] > key) {
                data[j + 1] = data[j];
                j = j - 1;
            }
            data[j + 1] = key; 
        }

        std::cout << "Insertion Sort complete!" << std::endl;
    }
};

int main() {
    std::cout << "--- OOP Sorting Demo (Insertion Sort) ---" << std::endl;
    
    // Create the object
    ArraySorter sorter;

    // 1. Input Data
    sorter.inputData();

    // 2. Display Unsorted Data
    std::cout << "\n--- Before Sorting ---" << std::endl;
    sorter.display();

    // 3. Perform Sorting
    sorter.insertionSort();

    // 4. Display Sorted Data
    std::cout << "\n--- After Sorting ---" << std::endl;
    sorter.display();

    std::cout << "------------------------------------------" << std::endl;
    return 0;
}
