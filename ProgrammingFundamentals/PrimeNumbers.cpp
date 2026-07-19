#include <iostream>

void checkPrime(){
    int n;
    std::cout<<"Enter the number you want to check: ";
    std::cin>>n;
    int i;
    for(i=2; i<n; i++){
        if(n % i==0){
        std::cout<<"Not a prime number\n";
        break;
        }
    }
    if(n==i){
        std::cout<<"A prime number\n";
}

}

void printPrime(){
    int limit;
    std::cout<<"Enter the number till you want to print the Prime numbers: ";
    std::cin>>limit;

    for(int i=2; i<=limit; i++){
        int j;
        for(j=2; j<i; j++){
            if(i % j == 0){
            break;
        }
        }
        if(j == i){
            std::cout<<i<<" ";
        }
    }
}

int main()
{
    checkPrime();
    std::cout<<"\n************************\n\n";
    printPrime();

return 0;
}