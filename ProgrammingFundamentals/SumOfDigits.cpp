#include <iostream>
int main(){
    int n, remainder;
    int sum = 0;

    std::cout<<"Enter the number: ";
    std::cin>>n;

    while(n != 0 ){

        remainder = n % 10;
        sum += remainder;
        n = n/10;

    }
    std::cout<<"Sum of digtis of the entered number is: "<<sum;

    return 0;
    
}