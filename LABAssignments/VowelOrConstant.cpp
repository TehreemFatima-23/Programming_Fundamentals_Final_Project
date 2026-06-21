#include <iostream>
using namespace std;

int main() {
    char ch;
    
    // Input a character
    cout << "Enter an alphabet: ";
    cin >> ch;
    
    // Convert to lowercase for uniformity
    ch = tolower(ch);
    
    // Check whether the character is a vowel or consonant using switch
    switch (ch) {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
            cout << ch << " is a vowel." << endl;
            break;
        default:
            if ((ch >= 'a' && ch <= 'z')) {
                cout << ch << " is a consonant." << endl;
            } else {
                cout << "Invalid input! Please enter an alphabet." << endl;
            }
    }
    
    return 0;
}
