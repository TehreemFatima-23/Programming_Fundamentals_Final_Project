#include <iostream>

void R_Triangle(){

    std::cout<<"-----------Right Triangle----------\n";
    for(int i=1; i<=5; i++){
        for(int j=1; j<=i; j++){
            std::cout<<"*";
        }
        std::cout<<"\n";
    }
    std::cout<<"\n";
}

void UpsiedDown(){

    std::cout<<"-----------Upside down of Right Triangle----------\n";
    for(int i=5; i>=1; i--){
        for(int j=1; j<=i; j++){
            std::cout<<"*";
        }
        std::cout<<"\n";
    }
}

void L_Triangle(){
    
    std::cout<<"-----------Left Triangle----------\n";
    for(int i=1; i<=5; i++){
        for(int j=1; j<=5; j++){
            if(j>=6-i){
            std::cout<<"*";
            }
            else{
                std::cout<<" ";
            }
        }
        std::cout<<"\n";
    }

}

int main() {
    R_Triangle();
    UpsiedDown();
    L_Triangle();

    return 0;
}