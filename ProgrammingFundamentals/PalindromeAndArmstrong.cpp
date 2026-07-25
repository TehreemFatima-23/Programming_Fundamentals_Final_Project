#include <iostream>

void palindrome(){
    int n, remainder, x;
    int sum = 0;
    
    std::cout<<"Identify the Palindrome Number\n"<<"------------------------------\n";
    std::cout<<"Enter the number: ";
    std::cin>>n;
    x=n;

    while(n != 0){
        remainder = n % 10;
        sum = sum*10 + remainder;
        n = n/10;
    }
    if (x == sum){
        std::cout<<"Palindrome Number\n";
    }
    else{
        std::cout<<"Not a Palindrome Number\n";
    }
    std::cout<<"================================\n";

}
void armstrong(){
    int n, remainder, x;
    int sum = 0;
    
    std::cout<<"Identify the Armstrong Number\n"<<"------------------------------\n";
    std::cout<<"Enter the number: ";
    std::cin>>n;
    x=n;

    while(n != 0){
        remainder = n % 10;
        sum = sum + remainder*remainder*remainder;
        n = n/10;
    }
    if (x == sum){
        std::cout<<"Armstrong Number\n";
    }
    else{
        std::cout<<"Not an Armstrong Number\n";
    }
}
int main(){
    palindrome();
    armstrong();
    
return 0;

}