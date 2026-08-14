#include <iostream>
#include <cmath>
int main(){
    int n;
    std::cout<<"Enter the number you want to check: ";
    std::cin>>n;

    int s = sqrt(n);
    if(s*s == n){
        std::cout<<"This number is a perfect square";
    }
    else{
        std::cout<<"This number is not a perfect square";
    }
    return 0;
}