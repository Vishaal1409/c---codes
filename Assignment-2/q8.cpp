#include <iostream>
#include <string>

void process(int data) {
    std::cout << "[Overloading]: Processing single integer data: " << data << std::endl;
}

void process(const std::string& data) {
    std::cout << "[Overloading]: Processing string data: " << data << std::endl;
}

void process(int data1, int data2) {
    std::cout << "[Overloading]: Processing two integers. Sum is: " << data1 + data2 << std::endl;
}

class Vehicle {
public:
    virtual void startEngine() const {
        std::cout << "[Overriding]: Vehicle (Base) engine started normally." << std::endl;
    }
    virtual ~Vehicle() = default;
};

class ElectricCar : public Vehicle {
public:
    
    void startEngine() const override {
        std::cout << "[Overriding]: ElectricCar (Derived) engine started silently with battery check." << std::endl;
    }
};

int main() {
    std::cout << "--- Polymorphism Demonstration ---\n" << std::endl;

    std::cout << "--- 1. FUNCTION OVERLOADING (Compile-Time) ---" << std::endl;
    
    
    process(100);                       
    process("Startup sequence");       
    process(15, 25);                    

    std::cout << "\n--- 2. FUNCTION OVERRIDING (Run-Time) ---" << std::endl;

    // Instantiate objects
    Vehicle regularVehicle;
    ElectricCar tesla;

    // A. Direct Calls:
    std::cout << "A. Direct Calls:" << std::endl;
    regularVehicle.startEngine();
    tesla.startEngine();         

    // B. Polymorphic Call 
    std::cout << "\nB. Polymorphic Call (Run-Time Dispatch):" << std::endl;
    
    Vehicle* v_ptr; 

    // Case 1: 
    v_ptr = &regularVehicle;
    std::cout << "  Pointer holds Base object address:" << std::endl;
    v_ptr->startEngine(); 


    // Case 2:
    v_ptr = &tesla;
    std::cout << "  Pointer holds Derived object address:" << std::endl;
    v_ptr->startEngine();
    return 0;
}
