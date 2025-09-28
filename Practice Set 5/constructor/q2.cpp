#include <iostream>
#include <string>
using namespace std;
class Student{
    private:
    string name;
    int age;
    int studentId;
    public:
    Student(string n, int a){
        name = n;
        age = a;
        studentId = 0;
    }
    Student(string n, int a, int id){
        name = n;
        age = a;
        studentId = id;
    }
    void display(){
        cout<<"Name: "<<name<<endl;
        cout<<"Age: "<<age<<endl;
        cout<<"Student ID: "<<studentId<<endl;
    }
};
int main(){
    Student s1("John", 20);
    Student s2("Alice", 22, 1001);
    s1.display();
    s2.display();
    return 0;
}