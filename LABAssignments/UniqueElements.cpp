#include <iostream>
using namespace std;

// Function to print unique elements
void printUnique(int arr[], int size) {
    bool isUnique;

    cout << "The unique elements found in the array are:\n";
    for (int i = 0; i < size; i++) {
        isUnique = true;
        for (int j = 0; j < size; j++) {
            if (i != j && arr[i] == arr[j]) {
                isUnique = false;
                break;
            }
        }
        if (isUnique) {
            cout << arr[i] << " ";
        }
    }
    cout << endl;
}

int main() {

    int arr[100], n;
    cout << "Input the number of elements to be stored in the array: ";
    cin >> n;

    cout << "Input " << n << " elements in the array:\n";
    for (int i = 0; i < n; i++) {
        cout << "element # " << i << " : ";
        cin >> arr[i];
    }

    printUnique(arr, n);

    return 0;
}

