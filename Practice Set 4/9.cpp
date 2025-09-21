#include<iostream>
using namespace std;
class Employee
{
    private:
    string name;
    int id;
    int salary;
    public:
    Employee(string n, int i)
    {
        name=n;
        id=i;
        salary=0;
    }
    Employee(string n, int i, int s)
    {
        name=n;
        id=i;
        salary=s;
    }
    void get()
    {
        cout<<"Name: "<<name<<endl;
        cout<<"ID: "<<id<<endl;
        cout<<"Salary: "<<salary<<endl;
    }
};
int main()
{
    Employee e1("A",1237);
    e1.get();
    Employee e2("N",7760,1200000);
    e2.get();
    return 0;
}