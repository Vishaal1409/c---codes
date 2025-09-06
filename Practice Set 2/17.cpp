//Write a program to find the GCD (Greatest Common Divisor) of two numbers using a while loop.
#include<iostream>
using namespace std;
int main(){
    int n1,n2,rem;
    cout<<"Enter the first number:";
    cin>>n1;
    cout<<"Enter the second number:";
    cin>>n2;
    while(n1!=n2){
        if(n1>n2){
            n1=n1-n2;
        }
        else{
            n2=n2-n1;
        }
    }
    cout<<"GCD = "<<n1;
    return 0;
}