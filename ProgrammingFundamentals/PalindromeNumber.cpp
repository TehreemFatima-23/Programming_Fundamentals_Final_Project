#include <iostream>
int main(){
    int n, remainder, x;
    int sum = 0;

    std::cout<<"Enter the number: ";
    std::cin>>n;
    x=n;

    while(n != 0){
        remainder = n % 10;
        sum = sum*10 + remainder;
        n = n/10;
    }
    if (x == sum){
        std::cout<<"Palindrome Number";
    }
    else{
        std::cout<<"Not a Palindrome Number";
    }
return 0;

}