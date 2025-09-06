//Find the sum of the first N natural numbers (input N) using a for loop.
#include<iostream>
using namespace std;
int main(){
    int n,sum=0;
    cout<<"Enter a number:";
    cin>>n;
    for(int i=0;i<=n;i++){
        sum=sum+i;
    }
    cout<<"Sum of the first "<<n<<" natural numbers is "<<sum;
    return 0;
}