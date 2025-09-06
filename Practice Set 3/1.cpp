// Create a class Student with private data members name and age. Write
// setter and getter methods to assign and retrieve their values. Demon-
// strate their use in main().
#include<iostream>
#include<string>
using namespace std;

class Student{
private:
    string name;
    int age;

public:
    void setName(string n){
        name=n;
    }

    string getName(){
        return name;
    }

    void setAge(int a){
        age=a;
    }

    int getAge(){
        return age;
    }
};
int main(){
    Student s1;
    s1.setName("Vishaal");
    s1.setAge(18);

    cout<<"Student Name: "<<s1.getName()<<endl;
    cout<<"Student Age: "<<s1.getAge()<<endl;

    return 0;
}