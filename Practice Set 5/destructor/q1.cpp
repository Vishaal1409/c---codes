#include <iostream>
using namespace std;
class MyObject{
    public:
        MyObject(){
            cout<<"Constructor called"<<endl;
        }
        ~MyObject(){
            cout<<"Destructor called"<<endl;
        }
};
int main(){
    MyObject obj;
    return 0;
}