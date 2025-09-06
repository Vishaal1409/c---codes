//Write a program to find the factorial of a number using a while loop.
#include<iostream>
using namespace std;
int main(){
    int n,i=1;
    long long fact = 1;
    cout<<"Enter a number:";
    cin>>n;
    while(i<=n){
        fact=fact*i;
        i++;
    }
    cout<<"The factorial for "<<n<<" is "<<fact;
    return 0;
}