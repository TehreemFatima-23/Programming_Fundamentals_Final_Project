#include <iostream>

void updateValues(int *val1, int *val2){
    int sum = *val1 + *val2;
    int diff;
    if(*val1 > *val2){
        diff = *val1 - *val2;
    }
    else{
        diff = *val2 - *val1;
    }
    *val1 = sum;
    *val2 = diff;
}

int main(){
    int val1, val2;
    int *pVal1 = &val1;
    int *pVal2 = &val2;

    std::cout<<"Enter the numbers: ";
    std::cin>>val1>>val2;

    updateValues(pVal1, pVal2);
    std::cout<<"Updated Values: "<<val1<<" "<<val2;
    return 0;

}