#include <iostream>
#include <fstream>
class FileHandler {
private:
    std::ofstream file;
public:
    FileHandler(const char* filename) {
        file.open(filename);
        if (file.is_open()) {
            std::cout << "Constructor: File '" << filename << "' opened." << std::endl;
        }
    }
    ~FileHandler() {
        if (file.is_open()) {
            file.close();
            std::cout << "Destructor: File closed." << std::endl;
        }
    }
    void writeToFile(const std::string& content) {
        if (file.is_open()) {
            file << content;
        }
    }
};
int main() {
    FileHandler handler("log.txt");
    handler.writeToFile("This is a test message.");
    return 0;
}