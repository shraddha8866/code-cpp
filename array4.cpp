//Write a program to find the middle element of an array
#include <iostream>

using namespace std;

int main() {
    int size;

    cout << "Enter the size of the array: ";
    cin >> size;

    if (size <= 0) {
        cout << "Array size should be greater than 0." << endl;
        return 1;
    }

    int arr[size];

    cout << "Enter the elements of the array: ";
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }

    if (size % 2 == 0) {
        int middle1 = arr[size / 2 - 1];
        int middle2 = arr[size / 2];
        cout << "Middle elements: " << middle1 << " and " << middle2 << endl;
    } else {
        int middle = arr[size / 2];
        cout << "Middle element: " << middle << endl;
    }

    return 0;
}