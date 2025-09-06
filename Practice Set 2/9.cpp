//Write a program that keeps asking the user for input until they enter a negative number
#include<iostream>
using namespace std;
int main(){
    int n;
    do{
        cout<<"Enter any number:";
        cin>>n;
    }
    while(n>0);
    return 0;
}