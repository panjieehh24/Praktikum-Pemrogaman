#include <iostream>
using namespace std;

int NISN(); // Function declaration

int main() {
    int data[]{90, 55, 80, 60, 70, 65, 60};
    int dataSize = sizeof(data) / sizeof(data[0]);

    // Bubble sort for the first array (values)
    for (int i = 0; i < dataSize - 1; i++) {
        for (int j = 0; j < dataSize - 1 - i; j++) {
            if (data[j] > data[j + 1]) {
                int temp = data[j];
                data[j] = data[j + 1];
                data[j + 1] = temp;
            }
        }
    }

    // Output sorted values array
    cout << "Sorted values array: ";
    for (int i = 0; i < dataSize; i++) {
        cout << data[i] << " ";
    }
    cout << endl;

    // Call the NISN function to sort and print the second array
    NISN();

    return 0;
}

int NISN() {
    long long data[]{9960312699, 9963959682, 9950310962, 9970272750, 9970293945, 9952382180, 9965653989};
    int dataSize = sizeof(data) / sizeof(data[0]);

    // Bubble sort for the second array (NISN numbers)
    for (int i = 0; i < dataSize - 1; i++) {
        for (int j = 0; j < dataSize - 1 - i; j++) {
            if (data[j] > data[j + 1]) {
                long long temp = data[j];
                data[j] = data[j + 1];
                data[j + 1] = temp;
            }
        }
    }

    // Output sorted NISN array
    cout << "Sorted NISN array: ";
    for (int i = 0; i < dataSize; i++) {
        cout << data[i] << " ";
    }
    cout << endl;

    return 0;
}
