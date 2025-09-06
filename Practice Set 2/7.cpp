//Check whether a number is prime or not using a for loop.
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number:";
    cin>>n;
    for(int i=2;i*i<n;i++){
        if(n%i==0){
            cout<<"Number is not Prime.";
            return 0;
        }
    }
    cout<<"Number is Prime.";
    return 0;
}