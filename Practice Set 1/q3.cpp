#include<iostream>
int main(){
    int num1,num2;
    std::cout << "Enter your integers: ";
    std::cin >> num1 >> num2;
    if(num1 > num2){
        std::cout << num1 << " is greater than " << num2 << std::endl;
    }
    else if(num1 < num2){
        std::cout << num1 << " is lesser than " << num2 << std::endl;
    }
    else{
        std::cout << num1 << " is equal to " << num2 << std::endl;
    }
    return 0;
}