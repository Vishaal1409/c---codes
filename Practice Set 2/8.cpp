//Print all odd numbers between 1 and 50 using a while loop.
#include<iostream>
using namespace std;
int main(){
    int i=1;
    while(i<=50){
        if(i%2!=0){
            cout<<" "<<i;
        }
        i++;
    }
    return 0;
}