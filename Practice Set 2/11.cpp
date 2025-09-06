//Write a program to calculate the power of a number (a)^b using while loop
#include<iostream>
using namespace std;
int main(){
    int a,b,i=1;
    long long num=1;
    cout<<"Enter a number to be powered:";
    cin>>a;
    cout<<"Enter the power:";
    cin>>b;
    while(i<=b){
        num=num*a;
        i++;
    }
    cout<<a<<"^"<<b<<" = "<<num;
    return 0;
}