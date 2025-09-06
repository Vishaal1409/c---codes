//Print the digits of a number in reverse order using a do-while loop.
#include<iostream>
using namespace std;
int main(){
    int n,rev=0,rem;
    cout<<"Enter a number to be reversed:";
    cin>>n;
    do{
        rem=n%10;
        rev=rev*10+rem;
        n=n/10;
    }
    while(n!=0);
    cout<<"Reversed number is: "<< rev;
    return 0;
}