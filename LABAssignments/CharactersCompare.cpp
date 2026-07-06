#include<iostream>
using namespace std;

int compareChars(char c1, char c2)
{
    // Check if both are alphabets
    if ((c1< 'A' || (c1> 'Z' && c1< 'a') || c1> 'z') || (c2< 'A' || (c2> 'Z' && c2< 'a') || c2 > 'z'))
    {
        return -99;
    }
    
    // Convert to lowercase manually
    if (c1 >= 'A' && c1 <= 'Z')
        c1 = c1 + 32;  // Convert uppercase to lowercase
    if (c2 >= 'A' && c2 <= 'Z')
        c2 = c2 + 32;  // Convert uppercase to lowercase
    
    // Compare the characters
    if (c1 > c2)
        return 1;
    else if (c1 < c2)
        return -1;
    else
        return 0;
}

int main()
{
    char ch1, ch2;
    
    cout << "Enter first character: ";
    cin >> ch1;
    cout << "Enter second character: ";
    cin >> ch2;
    
    int result = compareChars(ch1, ch2);
    
    cout << "Result: " << result << endl;
    
    return 0;
}