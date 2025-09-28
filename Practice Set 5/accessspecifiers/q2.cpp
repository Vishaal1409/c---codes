#include <iostream>
using namespace std;
class MyClass{
    public:
    int publicData;
    private:
    int privateData;
    public:
    MyClass(int pub, int priv) : publicData(pub), privateData(priv) {}
    void accessPrivateData() {
        cout << "Private Data: " << privateData << endl;
    }
};
int main(){
    MyClass obj(10, 20);
    cout << "Public Data: " << obj.publicData << endl;
    obj.accessPrivateData();
    return 0;
}