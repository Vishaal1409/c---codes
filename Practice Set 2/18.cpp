//Print the Fibonacci sequence up to N terms using a for loop.
#include<iostream>
using namespace std;
int main(){
    int n,a=0,b=1,fibo;
    cout<<"Enter the number of terms:";
    cin>>n;
    cout<<" FIBONACCI SERIES: ";
    for(int i=0;i<n;i++){
        cout<<a<<" ";
        fibo=a+b;
        a=b;
        b=fibo;
    }
    return 0;
}