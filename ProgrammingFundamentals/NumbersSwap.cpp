#include <iostream>
using namespace std;

void swapWithoutThird(){
    int a, b;

    cout<<"-----Swapping without using a third variable-----"<<endl;
    cout<<"Enter first Number: ";
    cin>>a;
    cout<<"Enter second Number: ";
    cin>>b;
// Swapping logic without using third variable
    a = a + b;
    b = a - b;
    a = a - b;

    cout<<"Swap is: "<<endl<<"First Number: "<<a<<endl<<"Second Number: "<<b<<endl;

}
void swapUsingThird(){

    int num1, num2;
    int temp;
    
    cout<<"-----Swapping using a third variable-----"<<endl;
    cout<<"Enter Number-1: ";
    cin>>num1;
    cout<<"Enter Number-2: ";
    cin>>num2;
//Swapping by using third variable
    temp = num1;
    num1 = num2;
    num2 = temp;

    cout<<"Swap is: "<<endl<<"Number-1: "<<num1<<endl<<"Number-2: "<<num2<<endl;
}
int main(){

    swapWithoutThird();
    swapUsingThird();

    return 0;
}