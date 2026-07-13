#include <iostream>
using namespace std;
int main(){
    int num1, num2;

    cout<<"Enter the Numbers you want to swap with each other: ";
    cin>>num1>>num2;

    int temp;
    temp = num1;
    num1 = num2;
    num2 = temp;

    cout<<"The numbers after swapping are: "<<num1<<" "<<num2;

    return 0;
}