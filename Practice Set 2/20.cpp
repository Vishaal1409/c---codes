//Write a program to keep taking marks as input until the user enters −1, then print the average of the entered marks.
#include<iostream>
using namespace std;
int main(){
    int marks,count=0;
    float avg=0,sum=0;
    while(marks!=-1){
        cout<<"Enter the marks:";
        cin>>marks;
        sum=sum+marks;
        count++;
    }

    avg=sum/count;
    cout<<"The average marks is:"<<avg;
    return 0;
}