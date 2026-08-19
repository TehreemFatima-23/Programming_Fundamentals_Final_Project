#include <iostream>
#include <string.h>

void reverseArray(){
    int arr[] = {6, 7, 8, 9, 10};
    int length = sizeof(arr)/sizeof(arr[0]);
    std::cout<<"Given Array is: ";
    for(int i=0; i<=length-1; i++){
        std::cout<<arr[i]<<" ";
    }

    std::cout<<"\nReverse of the Array : ";
    for(int i=length-1; i>=0; i--){
        std::cout<<arr[i]<<" ";
    }
    std::cout<<"\n";
}

void reverseString(){
    char str[] = "Tehreem Fatima";
    int length = strlen(str);
    std::cout<<"Given string is: ";
    for(int i=0; i<=length-1; i++){
        std::cout<<str[i];
    }
    std::cout<<"Reversed string is: ";
    for(int i=length-1; i>=0; i--){
        std::cout<<str[i];
    }
}

int main (){
    reverseArray();
    reverseString();
    return 0;
}