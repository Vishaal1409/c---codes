#include <iostream>
#include <string>
class Sports; 

// Class 1: Student
class Student {
private:
    std::string studentName;
    int marks;

public:
    Student(const std::string& name, int m) : studentName(name), marks(m) {}

    friend void showCombinedScore(const Student& s, const Sports& sp);

    void displayMarks() const {
        std::cout << studentName << " obtained " << marks << " marks in academics." << std::endl;
    }
};

// Class 2: Sports 
class Sports {
private:
    int score; 

public:
    Sports(int sc) : score(sc) {}

    friend void showCombinedScore(const Student& s, const Sports& sp);

    void displayScore() const {
        std::cout << "Obtained " << score << " points in sports." << std::endl;
    }
};

void showCombinedScore(const Student& s, const Sports& sp) {
    // Accessing private members 
    int total = s.marks + sp.score;

    std::cout << "\n--- Friend Function Access ---\n";
    std::cout << "The total combined score for " << s.studentName 
              << " is (Marks: " << s.marks << " + Score: " << sp.score << ") = " 
              << total << "." << std::endl;
    std::cout << "------------------------------\n";
}

int main() {
    std::cout << "--- Friend Function Demo (Sharing Private Data) ---\n" << std::endl;

    // 1. Create objects
    Student s1("Rajesh", 95);
    Sports sp1(15);

    // 2. Display individual data using public methods
    s1.displayMarks();
    sp1.displayScore();

    // 3. Call the friend function 
    showCombinedScore(s1, sp1);

    // 4. Attempt to access private data directly 
    return 0;
}
