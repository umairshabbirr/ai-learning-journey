#include <iostream>
using namespace std;

int main() {
    const int SIZE = 5;         // Original array size
    int arr[SIZE + 1];          // Make space for one extra element

    // Input 5 integers
    cout << "Enter 5 integers: ";
    for (int i = 0; i < SIZE; i++) {
        cin >> arr[i];
    }

    int value, position;

    // Input value and position
    cout << "Enter value to insert: ";
    cin >> value;

    cout << "Enter position to insert (0 to " << SIZE << "): ";
    cin >> position;

    // Validate position
    if (position < 0 || position > SIZE) {
        cout << "Invalid position! Position must be between 0 and " << SIZE << "." << endl;
        return 0;
    }

    // Shift elements to the right to make space
    for (int i = SIZE; i > position; i--) {
        arr[i] = arr[i - 1];
    }

    // Insert value at given position
    arr[position] = value;

    // Print updated array
    cout << "Updated Array: ";
    for (int i = 0; i < SIZE + 1; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}

