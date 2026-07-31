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

void R_UpsiedDown(){

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
    std::cout<<"\n";

}

void L_UpsideDown(){
    
    std::cout<<"-----------Upside down of Left Triangle----------\n";
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
    R_Triangle();
    R_UpsiedDown();
    L_Triangle();
    L_UpsideDown();

    return 0;
}