#include <iostream>

void DegreeCelsiusToFahrenheit(){
     float C, F;
    std::cout<<"Enter temperature in degree Celsius: ";
    std::cin>>C;
    F = (C*9/5) + 32;
    std::cout<<"Temperature in Fahrenheit is: "<<F;
}

void FahrenheitToDegreeCelsius(){
    float C, F;
    std::cout<<"\nEnter temperature in Fahrenheit: ";
    std::cin>>F;
    C = (5.0/9.0) * (F - 32);
    std::cout<<"Temperature in degree Celsius is: "<<C;

}
int main(){
    DegreeCelsiusToFahrenheit();
    FahrenheitToDegreeCelsius();
   
    return 0;
}