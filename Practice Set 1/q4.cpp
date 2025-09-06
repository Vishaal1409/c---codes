#include<iostream>
int main(){
    int num1,num2,num3;
    std::cout << "Enter three integers: ";
    std::cin >> num1 >> num2 >> num3;
    if(num1 > num2 && num1 > num3){
        std::cout << num1 << " is the greatest among the three." << std::endl;
    }
    else if(num2 > num1 && num2 > num3){
        std::cout << num2 << " is the greatest among the three." << std::endl;
    }
    else{
        std::cout << num3 << " is the greatest among the three." << std::endl;
    }
    return 0;
}