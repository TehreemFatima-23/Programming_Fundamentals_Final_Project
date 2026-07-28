#include <iostream>
void hcf(){
    
    int a, b, hcf, remainder;
    std::cout<<"----------Find the HCF---------\n";
    std::cout<<"Enter first number: ";
    std::cin>>a;
    std::cout<<"Enter second number: ";
    std::cin>>b;
    while(true){
        hcf = b;
        remainder = a % b;
        a = b;
        b = remainder;
        if(b == 0){
            break;
        }

    }
    std::cout<<"HCF of the numbers is: "<<hcf;

}

void lcm(){
    int a, b;
    std::cout<<"\n----------Find the LCM----------\n";
    std::cout << "Enter first number: ";
    std::cin >> a;
    std::cout << "Enter second number: ";
    std::cin >> b;

    int lcm = a; 
    while (true) {
        if (lcm % b == 0) {
            break;
        }

        lcm = lcm + a; 
    }

    std::cout << "LCM of the numbers is: " << lcm << std::endl;

}

int main(){
    
    hcf();
    lcm();
    return 0;

}