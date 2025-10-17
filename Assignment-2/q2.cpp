#include <iostream>
#include <map>
#include <string>

class SimpleDictionary {
private:
    // Use std::map to store key-value pairs.
    // The key is a string 
    std::map<std::string, int> data;

public:
    // 1. Adding a key-value pair 
    void add(const std::string& key, int value) {
        data[key] = value;
        std::cout << "Added pair: '" << key << "' -> " << value << std::endl;
    }

    // 2. Searching for a key 
    bool containsKey(const std::string& key) const {
        // count() returns 1 
        return data.count(key) > 0;
    }

    // 3. Retrieving the value for a key 
    int getValue(const std::string& key) const {
        if (containsKey(key)) {
            return data.at(key);
        } else {
            throw std::out_of_range("Error: Key not found in dictionary.");
        }
    }

    // 4. Displaying all pairs 
    void displayAll() const {
        if (data.empty()) {
            std::cout << "Dictionary: {} (Empty)" << std::endl;
            return;
        }

        std::cout << "Dictionary Contents:" << std::endl;
        // Iterate through the map.
        for (const auto& pair : data) {
            std::cout << "  Key: '" << pair.first << "', Value: " << pair.second << std::endl;
        }
    }
};

int main() {
    SimpleDictionary myDict;

    // Add key-value pairs
    myDict.add("Apples", 5);
    myDict.add("Bananas", 12);
    myDict.add("Oranges", 8);

    // Display all pairs
    myDict.displayAll();

    // Search for keys
    std::string searchKey = "Bananas";
    if (myDict.containsKey(searchKey)) {
        std::cout << "\nFound key '" << searchKey << "'." << std::endl;
    } else {
        std::cout << "\nKey '" << searchKey << "' not found." << std::endl;
    }

    // Retrieve a value
    try {
        std::cout << "Value for 'Apples': " << myDict.getValue("Apples") << std::endl;
        std::cout << "Value for 'Grapes': " << myDict.getValue("Grapes") << std::endl; 
    } catch (const std::out_of_range& e) {
        std::cerr << "Caught exception: " << e.what() << std::endl;
    }

    return 0;
}