#include <iostream>
using namespace std;
int NISN();
int main(){
    int data[]{90, 55, 80, 60, 70, 65, 60};
    int dataSize = sizeof(data) / sizeof(data[0]);

    // Insertion sort for the first array (values)
    for (int j = 1; j < dataSize; j++) {
        int i = j - 1;
        int temp = data[j];
        while (i >= 0 && data[i] > temp) {
            data[i + 1] = data[i];
            i--;
        }
        data[i + 1] = temp;
    }

    cout << "Sorted values array: ";
    for (int j = 0; j < dataSize; j++) {
        cout << data[j] << " ";
    }
    cout << endl;

    // Call the NISN function to sort and print the second array
    NISN();

    return 0;
}

int NISN(){
    long long data[]{9960312699, 9963959682, 9950310962, 9970272750, 9970293945, 9952382180, 9965653989};
    int dataSize = sizeof(data) / sizeof(data[0]);

    // Insertion sort for the second array (NISN numbers)
    for (int p = 1; p < dataSize; p++) {
        int i = p - 1;
        long long temp = data[p];
        while (i >= 0 && data[i] > temp) {
            data[i + 1] = data[i];
            i--;
        }
        data[i + 1] = temp;
    }

    // Output sorted NISN array
    cout << "Sorted NISN array: ";
    for (int p = 0; p < dataSize; p++) {
        cout << data[p] << " ";
    }
    cout << endl;

    return 0;
}
