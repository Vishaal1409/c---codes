#include <iostream>
#include <string>

//Base Class (Grandparent)
class Person {
protected:
    std::string name;
    int age;

public:
    // Constructor
    Person(const std::string& n, int a) : name(n), age(a) {
        std::cout << "  Person constructor called for " << name << std::endl;
    }

    // Common behavior
    void introduce() const {
        std::cout << "Hello, my name is " << name 
                  << " and I am " << age << " years old." << std::endl;
    }

    virtual ~Person() {
        std::cout << "  Person destructor called for " << name << std::endl;
    }
};

//Derived Class (Child) 

class Employee : public Person {
protected:
    int employeeID;
    double salary;

public:
    // Constructor: 
    Employee(const std::string& n, int a, int id, double s) 
        : Person(n, a), employeeID(id), salary(s) {
        std::cout << "  Employee constructor called for ID " << employeeID << std::endl;
    }
    void displayJobDetails() const {
        std::cout << "  - Employee ID: " << employeeID 
                  << ", Salary: $" << salary << std::endl;
    }
    void introduce() const {
        std::cout << "Hi, I'm " << name << ", an employee (ID: " << employeeID << ")." << std::endl;
    }

    virtual ~Employee() {
        std::cout << "  Employee destructor called for ID " << employeeID << std::endl;
    }
};

//Further Derived Class (Grandchild)
class Manager : public Employee {
private:
    std::string department;

public:
    // Constructor: 
    Manager(const std::string& n, int a, int id, double s, const std::string& dept)
        : Employee(n, a, id, s), department(dept) {
        std::cout << "  Manager constructor called for department " << department << std::endl;
    }
    void manage() const {
        std::cout << "  - Department Managed: " << department << std::endl;
    }
    // Overriding the inherited introduce method
    void introduce() const {
        std::cout << "Good day! I'm " << name << ", the Manager of the " 
                  << department << " department." << std::endl;
    }

    ~Manager() override {
        std::cout << "  Manager destructor called for " << name << std::endl;
    }
};

int main() {
    std::cout << "--- Multilevel Inheritance Demo (Person -> Employee -> Manager) ---\n" << std::endl;

    Manager ceo(
        "Alice Johnson", 
        45, 
        1001, 
        150000.00, 
        "Executive"
    );

    std::cout << "\n--- Manager Object Capabilities ---\n" << std::endl;

    std::cout << "1. Calling Manager's 'introduce' (Overridden):" << std::endl;
    ceo.introduce(); 

    std::cout << "\n2. Calling Employee's 'displayJobDetails' (Inherited):" << std::endl;
 
    ceo.displayJobDetails(); 

    std::cout << "\n3. Calling Manager's 'manage' (Specialized):" << std::endl;
    ceo.manage(); 

    std::cout << "\n--- Destructor Calls ---" << std::endl;
   
    return 0;
}