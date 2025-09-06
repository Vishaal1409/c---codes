// Define a class Employee with private members id and salary. Use
// setters and getters to initialize and display their values. In main(),
// create multiple employees and print their details.
#include<iostream>
#include<string>
using namespace std;
class Employee{
private:
    int id;
    float salary;
public:
    void setId(int i){
        id=i;
    }
    int getId(){
        return id;
    }
    void setSalary(float s){
        salary=s;
    }
    float getSalary(){
        return salary;
    }
};
int main(){
    int n;
    cout<<"Enter number of employees";
    cin>>n;
    Employee e[n];
    for(int i=0;i<n;i++){
        int id;
        float salary;
        cout<<"Enter details for Employee "<<(i+1)<<":\n";
        cout<<"ID:";
        cin>>id;
        e[i].setId(id);

        cout<<"Salary:";
        cin>>salary;
        e[i].setSalary(salary);
    }
    cout << "\n===== EMPLOYEES DETAILS =====\n";
    for (int i = 0; i < n; i++) {
        cout << "Employee " << (i + 1) << " -> ";
        cout << "ID: " << e[i].getId() << ", ";
        cout << "Salary: " << e[i].getSalary() << endl;
    }

    return 0;
}