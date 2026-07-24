#include <iostream>
int main(){
    int n, remainder;
    int sum = 0;

    std::cout<<"Enter the number you want to reverse: ";
    std::cin>>n;

    while(n!=0){
    remainder = n % 10;
    sum= sum*10 + remainder;
    n = n/10;

    }
    std::cout<<"Reversed Number is: "<<sum;
    return 0;

}