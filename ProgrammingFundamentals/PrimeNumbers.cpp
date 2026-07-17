#include <iostream>

int main()
{
    int n;
    std::cout<<"Enter the number: ";
    std::cin>>n;
    int i;
    for(i=2; i<n; i++){
        if(n%i==0){
        std::cout<<"Not a prime number";
        break;
        }
    }
    if(n==i){
        std::cout<<"A prime number";
}
return 0;
}