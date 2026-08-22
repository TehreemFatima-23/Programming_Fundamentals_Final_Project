#include <iostream>

struct Student{
    std::string firstName;
    std::string lastName;
    int age;
    float GPA;
};

int main(){
    Student st;
    std::cout<<"Enter First name of Student: ";
    std::cin>>st.firstName;
    std::cout<<"Enter Last name of Student: ";
    std::cin>>st.lastName;
    std::cout<<"Enter the age of Student: ";
    std::cin>>st.age;
    std::cout<<"Enter the GPA of Student: ";
    std::cin>>st.GPA;
return 0;
}