#include <iostream>
using namespace std;
class Data{
    private:
    int secret;
    public:
    void setSecret(int s) {
        secret = s;
    }
    int getSecret() const {
        return secret;
    }
};
int main() {
    Data d;
    d.setSecret(42);
    cout << "Secret: " << d.getSecret() << endl;
    return 0;
}