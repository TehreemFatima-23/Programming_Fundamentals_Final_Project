#include <iostream>
using namespace std;
int main(){
    int n;

    cout<<"Enter the number you want to check: ";
    cin>>n;

    //If number is even
    if(n%2 == 0){
        cout<<"Number is Even"<<endl;
    }
    //If number is odd
    else{
        cout<<"Number is odd"<<endl;
    }
    return 0;
}