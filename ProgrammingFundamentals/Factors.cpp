#include <iostream>
int main(){
    int n;
    std::cout<<"Enter a number: ";
    std::cin>>n;
    std::cout<<"Factors of the number are: ";
    for(int i=1; i<n; i++){
        if(n % i == 0){
            std::cout<<i<<" ";
        }
    }
    return 0;
}