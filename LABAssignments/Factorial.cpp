#include <iostream>

using namespace std;

int main() {
    int number;
    long long factorial = 1;

    cout << "Enter a positive integer: ";
    cin >> number;

    if (number < 0) {
        cout << "Factorial is not defined for negative numbers." << endl;
    } else {
        int i = number;
        while (i > 1) {
            factorial *= i;
            i--;
        }
        cout << "Factorial of " << number << " is " << factorial << ".\n";
    }
    return 0;
}
