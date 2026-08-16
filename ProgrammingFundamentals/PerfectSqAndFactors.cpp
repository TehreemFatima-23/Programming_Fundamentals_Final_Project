#include <iostream>
#include <cmath>

void perfectSquare(int n){

    int s = sqrt(n);
    if(s*s == n){
        std::cout<<"This number is a perfect square\n";
    }
    else{
        std::cout<<"This number is not a perfect square\n";
    }
}

void factors(int n){
    
    std::cout<<"Factors of the number are: ";
    for(int i=1; i<n; i++){
        if(n % i == 0){
            std::cout<<i<<" ";
        }
    }
}

void primeFactors(){
    
}

int main(){
    int n;
    std::cout<<"Enter a number: ";
    std::cin>>n;

    perfectSquare(n);
    factors(n);
    
    return 0;
}