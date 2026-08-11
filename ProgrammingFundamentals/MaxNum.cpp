#include <iostream>
int main(){
    int n, max=0;
    std::cout<<"Enter the size of the Array: ";
    std::cin>>n;
    int arr[n];
    
    std::cout<<"Elements of the array are: ";
    for(int i=0; i<n; i++){
        std::cin>>arr[i];
    }
    max = arr[0];
    for(int i=0; i<n; i++){
        if(max<arr[i]){
            max=arr[i];
        }
    }
    std::cout<<"The maximum number of the array is: "<<max;

    return 0;
}