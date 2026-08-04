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
        //For spaces printing
        for(int j=1; j<=5-i; j++){
                std::cout<<" ";
        }
        //For stars printing
        for(int k=1; k<=i; k++){
            std::cout<<"*";
        }
        std::cout<<"\n";
    }
    std::cout<<"\n";

}

void R_UpsideDown(){
    
    std::cout<<"-----------Upside down of Right Triangle----------\n";
    for(int i=5; i>=1; i--){
        //For spaces printing
        for(int j=1; j<=5-i; j++){
                std::cout<<" ";
        }
        //For stars printing
        for(int k=1; k<=i; k++){
            std::cout<<"*";
        }
        std::cout<<"\n";
    }
    std::cout<<"\n";

}

void T_shape(){
    
    std::cout<<"-----------T Shape of Stars----------\n";
    for(int i=1; i<=9; i++){
        for(int j=1; j<=9; j++){
            if(i==1 || j==5){
            std::cout<<"*";
            }
            else{
                std::cout<<" ";
            }
        }
        std::cout<<"\n";
    }

}

void pyramid(){
    
    std::cout<<"----------- Shape of Pyramid ----------\n";
    for(int i=1; i<=5; i++){
        for(int j=1; j<=9; j++){
            if(j>=6-i && j<=4+i){
            std::cout<<"*";
            }
            else{
                std::cout<<" ";
            }
        }
        std::cout<<"\n";
    }

}

void p_upsideDown(){
    
    std::cout<<"----------- Upside down of Pyramid ----------\n";
    for(int i=1; i<=5; i++){
        for(int j=1; j<=9; j++){
            if(j>=i && j<=10-i){
            std::cout<<"*";
            }
            else{
                std::cout<<" ";
            }
        }
        std::cout<<"\n";
    }

}

void L_pyramid(){
    
    std::cout<<"----------- Left Pyramid ----------\n";
    for(int i=1; i<=9; i++){
        for(int j=1; j<=5; j++){
            if(j<=i && j<=10-i){
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
    T_shape();
    pyramid();
    p_upsideDown();
    L_pyramid();

    return 0;
}