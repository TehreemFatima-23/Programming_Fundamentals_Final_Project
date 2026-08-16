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
    std::cout<<"\n";
}

void primeFactors(int n){
    int count = 0;
    int i, j;
    std::cout<<"Prime factors of the number are: ";
    for(i=1; i<n; i++){
        for(j=2; j<i; j++){
            if(i%j==0){
                break;
            }
        }
        if(j==i){
            if(n % i==0){
                std::cout<<i<<" ";
                count++;
            }
        }
    }
    if(count==0){
        std::cout<<"Prime factors not FOUND";
    }
}

int main(){
    int n;
    std::cout<<"Enter a number: ";
    std::cin>>n;

    perfectSquare(n);
    factors(n);
    primeFactors(n);
    
    return 0;
}