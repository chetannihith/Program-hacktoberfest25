#include <iostream>
using namespace std;

// This program performs Linear Search in an array
int main() {
    int n, target;
    cout << "Enter number of elements: ";
    cin >> n;

    int arr[n];
    cout << "Enter elements: ";
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    cout << "Enter the number to search: ";
    cin >> target;

    bool found = false;
    int index = -1;

    // Check each element
    for (int i = 0; i < n; i++) {
        if (arr[i] == target) {
            found = true;
            index = i;
            break;
        }
    }

    if (found)
        cout << "Element found at index " << index << endl;
    else
        cout << "Element not found" << endl;

    return 0;
}
