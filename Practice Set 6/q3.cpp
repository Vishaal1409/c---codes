#include <iostream>
class Employee {
private:
    int id;
    double salary;
    static int employeeCount;
public:
    Employee(int i, double s) : id(i), salary(s) {
        employeeCount++;
    }
    static int getEmployeeCount() {
        return employeeCount;
    }
    void display() {
        std::cout << "Employee ID: " << id << ", Salary: $" << salary << std::endl;
    }
};
int Employee::employeeCount = 0;
int main() {
    Employee e1(1, 50000.0);
    Employee e2(2, 60000.0);
    std::cout << "Total number of employees: " << Employee::getEmployeeCount() << std::endl;
    e1.display();
    e2.display();
    return 0;
}