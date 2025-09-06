//Take a number as input and check if it is an Armstrong number
#include<iostream>
using namespace std;
int main(){
    int n,original,sum=0;
    cout<<"Enter a number:";
    cin>>n;
    original=n;
    while(n>0){
        int digit=n%10;
        sum += digit*digit*digit;
        n /= 10;
    }
    if(sum==original){
        cout<<"ARMSTRONG NUMBER";
    }
    else{
        cout<<"NOT ARMSTRONG NUMBER";
    }
    return 0;
}