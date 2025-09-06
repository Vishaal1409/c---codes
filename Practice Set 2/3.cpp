//Print the multiplication table of a given number using a do-while loop.
#include<iostream>
using namespace std;
int main(){
    int n,i=1;
    cout<<"Enter a number:";
    cin>>n;
    cout<<"MULTIPLICATION TABLE FOR "<<n<<endl;
    do{
        cout<<i<<" X "<<n<<" = "<<i*n<<endl;
        i++;
    }
    while(i<=10);
    return 0;
}