#include <iostream>
using namespace std;

int main() {
    int num1, num2;
    char op;
    
    // Input two integers and an operator
    cout << "Enter two integers: ";
    cin >> num1 >> num2;
    cout << "Enter an arithmetic operator (+, -, *, /, %): ";
    cin >> op;
    
    // Perform arithmetic operation using switch
    switch (op) {
        case '+':
            cout << "Result: " << (num1 + num2) << endl;
            break;
        case '-':
            cout << "Result: " << (num1 - num2) << endl;
            break;
        case '*':
            cout << "Result: " << (num1 * num2) << endl;
            break;
        case '/':
            if (num2 != 0)
                cout << "Result: " << (num1 / num2) << endl;
            else
                cout << "Error! Division by zero." << endl;
            break;
        case '%':
            if (num2 != 0)
                cout << "Result: " << (num1 % num2) << endl;
            else
                cout << "Error! Modulus by zero." << endl;
            break;
        default:
            cout << "Invalid operator!" << endl;
    }
    
    return 0;
}
