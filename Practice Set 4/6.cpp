#include<iostream>
using namespace std;
class Book
{
    private:
    string title;
    string author;
    int price;
    public:
    Book(string t)
    {
        title=t;
        author="ND";
        price=0;
    }
    Book(string t,string a)
    {
        title=t;
        author=a;
        price=0;
    }
    Book(string t,string a,int p)
    {
        title=t;
        author=a;
        price=p;
    }
    void get()
    {
        cout<<"Title: "<<title<<endl;
        cout<<"Author: "<<author<<endl;
        cout<<"Price: "<<price<<endl;
    }
};
int main()
{
    Book b1("C");
    b1.get();
    Book b2("C++","abc");
    b2.get();
    Book b3("Python","def",5000);
    b3.get();
    return 0;   
}