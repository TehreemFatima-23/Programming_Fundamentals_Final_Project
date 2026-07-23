#include <iostream>

int main(){

int year;
std::cout<<"Enter a year: ";
std::cin>>year;

//To check if the entered year is leap or not
if (year%400==0 || year%4==0 && year%100 != 0){
    std::cout<<"Leap year";
}
else{
    std::cout<<"Not a leap year";
}
return 0;
}

