#include <iostream>

using namespace std;

int main() {
    int number;

    cout << "Enter a positive integer: ";
    cin >> number;

    if (number <= 0) {
        cout << "Please enter a positive integer." << endl;
    } else {
        for (int i = 1; i <= 10; i++) {
            cout << number << " x " << i << " = " << (number * i) << endl;
        }
    }

    return 0;
}
