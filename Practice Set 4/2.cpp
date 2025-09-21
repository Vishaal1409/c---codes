#include<iostream>
using namespace std;
class Student
{
    private:
    string name;
    int age;
    int marks;
    public:
    Student()
    {
        name="N";
        age=12;
        marks=90;
    }
    Student(string n,int a,int m)
    {
        name=n;
        age=a;
        marks=m;
    }
    void get()
    {
        cout<<"Name and age and marks are: "<<name<<" "<<age<<" "<<marks<<endl;
    }
};
int main()
{
    Student s1("A",7,90);
    s1.get();
    Student s2;
    s2.get();
    return 0;   
}