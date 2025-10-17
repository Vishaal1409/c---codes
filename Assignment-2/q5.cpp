#include <iostream>
#include <string>

// Base Class 1: Person 
class Person {
protected:
    std::string name;

public:
    // Constructor
    Person(const std::string& n) : name(n) {
        std::cout << "  Person part constructed: " << name << std::endl;
    }

    // Function from the identity base
    void introduce() const {
        std::cout << "Hi, my name is " << name << "." << std::endl;
    }
    
    virtual ~Person() = default;
};

// Base Class 2: Athlete 
class Athlete {
protected:
    std::string sport;
    int recordTimeSeconds;

public:
    // Constructor
    Athlete(const std::string& s, int rt) : sport(s), recordTimeSeconds(rt) {
        std::cout << "  Athlete part constructed for " << sport << std::endl;
    }

    // Function from the performance base
    void displayPerformance() const {
        std::cout << "  Specializes in " << sport 
                  << " with a record time of " << recordTimeSeconds << " seconds." << std::endl;
    }
    
    virtual ~Athlete() = default;
};

// Derived Class: SportsPerson 
class SportsPerson : public Person, public Athlete {
private:
    int yearsPro;

public:
    // Constructor: 
    SportsPerson(
        const std::string& name, 
        const std::string& sport, 
        int record, 
        int years
    ) 
    // Initialization List:
    : Person(name), 
      Athlete(sport, record), 
      yearsPro(years) 
    {
        std::cout << "SportsPerson object fully constructed." << std::endl;
    }

    // New, combined functionality
    void describeCareer() const {
        std::cout << "\n--- Career Summary ---" << std::endl;
        std::cout << name << " has been a professional " << sport 
                  << " athlete for " << yearsPro << " years." << std::endl;
    }
    
    // Destructor 
    ~SportsPerson() {
        std::cout << "  SportsPerson destructor called." << std::endl;
    }
};

int main() {
    std::cout << "--- Multiple Inheritance Demo (Person + Athlete -> SportsPerson) ---\n" << std::endl;

    // Create a SportsPerson object
    SportsPerson runner(
        "Usain Bolt", 
        "100-meter dash", 
        958, 
        14
    );
    std::cout << "\n1. Calling method inherited from Person:" << std::endl;
    runner.introduce();
    std::cout << "\n2. Calling method inherited from Athlete:" << std::endl;
    runner.displayPerformance(); 
    std::cout << "\n3. Calling method unique to SportsPerson:" << std::endl;
    runner.describeCareer();
    std::cout << "\n---------------------------------------------------" << std::endl;
    return 0;
}
