// Define a class University with private members name and ranking.
// Provide setters and getters. Demonstrate in main() that private data
// members cannot be accessed directly, but only via the methods.
#include<iostream>
#include<string>
using namespace std;
class University{
private:
    string name;
    int ranking;
public:
    void setName(string n){
        name=n;
    }
    string getName(){
        return name;
    }
    void setRanking(int r){
        ranking = r;
    }
    int getRanking(){
        return ranking;
    }
};
int main(){
    University u;
    int ranking;
    string name;
    
    cout<<"Enter your name:";
    cin>>name;
    u.setName(name);

    cout<<"Enter your ranking:";
    cin>>ranking;
    u.setRanking(ranking);

    cout << "Name: " << u.getName() << endl;
    cout << "Ranking: " << u.getRanking() << endl;
    return 0;
}