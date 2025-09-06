// Write a program that defines a class Book with private members title
// and price. Implement setters and getters for both members, and print
// the details of the book object.
#include<iostream>
#include<string>
using namespace std;
class Book{
private:
    string title;
    float price;
public:
    void setTitle(string t){
        title=t;
    }
    string getTitle(){
        return title;
    }
    void setPrice(float p){
        price=p;
    }
    float getPrice(){
        return price;
    }
};
int main(){
    Book b;
    b.setTitle("The Love hypothesis");
    b.setPrice(799.0);
    cout<<"Book Title: "<<b.getTitle()<<endl;
    cout<<"Book Price: "<<b.getPrice()<<endl;
    return 0;
}