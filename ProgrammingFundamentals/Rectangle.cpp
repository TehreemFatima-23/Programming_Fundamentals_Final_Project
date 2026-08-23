#include <iostream>

class Rectangle{
    public:
    int width;
    int height;
    void display(){
        std::cout<<"Width: "<<width<<"\n"<<"Height: "<<height<<"\n";
    }
};

class ReectangleArea :public Rectangle{
    public:
    void readInput(){
        std::cout<<"Enter width: ";
        std::cin>>width;
        std::cout<<"Enter Height: ";
        std::cin>>height;
    }
    void display(){
        std::cout<<"Area is: "<<width*height<<"\n";
    }
};

int main(){
    ReectangleArea rArea;
    rArea.readInput();
    rArea.Rectangle::display();
    rArea.display();
return 0;
}