#include <iostream>
int main(){
    std::string str;
    std::cout<<"Enter a string to remove Vowels from it: ";
    getline(std::cin, str);
    for(int i=0; i<str.length(); i++){
        if(str[i]=='a' || str[i]=='A'){
            continue;
        }
        else if(str[i]=='e' || str[i]=='E'){
            continue;
        }
        else if(str[i]=='i' || str[i]=='I'){
            continue;
        }
        else if(str[i]=='o' || str[i]=='O'){
            continue;
        }
        else if(str[i]=='u' || str[i]=='U'){
            continue;
        }
        else{
            std::cout<<str[i];
        }
    }
    return 0;
    
}