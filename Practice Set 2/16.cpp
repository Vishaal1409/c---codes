//Use a for loop to check if a number is a palindrome.
#include<iostream>
using namespace std;
int main(){
    int n,rem,rev=0;
    cout<<"Enter a number:";
    cin>>n;
    int original=n;
    for(int i=n;i>0;i=i/10){
        rem=i%10;
        rev=rev*10+rem;
    }
    if(rev==original){
        cout<<"PALINDROME NUMBER";
    }
    else{
        cout<<"NOT PALINDROME NUMBER";
    }
    return 0;
}