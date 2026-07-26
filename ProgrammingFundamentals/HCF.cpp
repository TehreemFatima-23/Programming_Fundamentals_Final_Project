#include <iostream>
int main(){
    int a, b, hcf, remainder;
    std::cout<<"Enter first number: ";
    std::cin>>a;
    std::cout<<"Enter second number: ";
    std::cin>>b;
    while(true){
        hcf = b;
        remainder = a % b;
        a = b;
        b = remainder;
        if(b == 0){
            break;
        }

    }
    std::cout<<"HCF of the numbers is: "<<hcf;
    return 0;

}