//Write a program to find the largest digit in a number
#include<iostream>
using namespace std;
int main(){
    int n,digit,largest=0;
    cout<<"Enter a number:";
    cin>>n;
    do{
        digit=n%10;
        if(digit>largest){
            largest=digit;
        }
        n=n/10;
    }
    while(n>0);
    cout<<"Largest Digit is: "<<largest<<endl;
    return 0;
}