#include <iostream>

int main() {
    int arr[100];
    int n, count = 0;

    std::cout << "Enter the size of the array: ";
    std::cin >> n;

    std::cout << "Enter the elements in the array: ";
    for (int i = 0; i < n; i++) {
        std::cin >> arr[i];
    }

    std::cout << "Duplicate elements are: ";
    for (int i = 0; i < n; i++) {
        
        // Check if this number appeared earlier
        bool already_seen = false;
        for (int k = 0; k < i; k++) {
            if (arr[i] == arr[k]) {
                already_seen = true;
                break;
            }
        }

        // If new, check if it repeats ahead
        if (!already_seen) {
            for (int j = i + 1; j < n; j++) {
                if (arr[i] == arr[j]) {
                     // Print the duplicate element
                    std::cout << arr[i] << " ";
                    count++;
                    break;
                }
            }
        }
    }

    std::cout << "\nTotal number of duplicate elements found: " << count;
    return 0;
}