#include <iostream>

void L_Triangle(){

    std::cout<<"-----------Left side Triangle----------\n";
    for(int i=1; i<=5; i++){
        for(int j=1; j<=i; j++){
            std::cout<<"*";
        }
        std::cout<<"\n";
    }
    std::cout<<"\n";
}

void L_UpsiedDown(){

    std::cout<<"-----------Upside down of Left Triangle----------\n";
    for(int i=5; i>=1; i--){
        for(int j=1; j<=i; j++){
            std::cout<<"*";
        }
        std::cout<<"\n";
    }
}

void R_Triangle(){
    
    std::cout<<"-----------Right side Triangle----------\n";
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
    std::cout<<"\n";

}

void R_UpsideDown(){
    
    std::cout<<"-----------Upside down of Right Triangle----------\n";
    for(int i=1; i<=5; i++){
        for(int j=1; j<=5; j++){
            if(j>=i){
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
    L_Triangle();
    L_UpsiedDown();
    R_Triangle();
    R_UpsideDown();

    return 0;
}