#include <iostream>
#include <string>
using namespace std;
class Student{
    private:
    string name;
    float marks;
    int rollNumber;
    public:
    Student(){
        name="";
        marks=0;
        rollNumber=0;
    }
    Student(string n, int b){
        name=n;
        rollNumber=b;
    }
    Student(string n, float m, int b){
        name=n;
        marks=m;
        rollNumber=b;
    }
    void display(){
        cout<<"Name: "<<name<<endl;
        cout<<"Marks: "<<marks<<endl;
        cout<<"Roll Number: "<<rollNumber<<endl;
    }
};
int main(){
    Student s1;
    Student s2("Alice", 101);
    Student s3("Bob", 95.5, 102);
    s1.display();
    s2.display();
    s3.display();
    return 0;
}