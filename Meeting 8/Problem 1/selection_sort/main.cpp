#include <iostream>
#include <string>

using namespace std;

// Define a struct to hold each student's information
struct student {
    long int StudId;
    string name;
    int data; // This represents the score
};

// Selection Sort function to sort by `data` (score) in descending order
void selectionSortByScore(student arr[], int n) {
    for (int i = 0; i < n - 1; ++i) {
        int maxIndex = i;

        // Find the maximum element in the unsorted portion of the array
        for (int j = i + 1; j < n; ++j) {
            if (arr[j].data > arr[maxIndex].data) {
                maxIndex = j;
            }
        }

        // Swap the found maximum element with the first element of the unsorted portion
        if (maxIndex != i) {
            student temp = arr[i];
            arr[i] = arr[maxIndex];
            arr[maxIndex] = temp;
        }
    }
}

// Selection Sort function to sort by `StudId` in descending order
void selectionSortById(student arr[], int n) {
    for (int i = 0; i < n - 1; ++i) {
        int maxIndex = i;

        // Find the maximum element in the unsorted portion of the array
        for (int j = i + 1; j < n; ++j) {
            if (arr[j].StudId > arr[maxIndex].StudId) {
                maxIndex = j;
            }
        }

        // Swap the found maximum element with the first element of the unsorted portion
        if (maxIndex != i) {
            student temp = arr[i];
            arr[i] = arr[maxIndex];
            arr[maxIndex] = temp;
        }
    }
}

// Function to print the array of students
void printArray(const student arr[], int n) {
    for (int i = 0; i < n; ++i) {
        cout << "ID: " << arr[i].StudId << ", Name: " << arr[i].name << ", Score: " << arr[i].data << endl;
    }
}

int main() {
    // Creating an array of student structs with id, name, and score
    student arr[] = {
        {9960312699, "Handi Ramadhan", 90},
        {9963959682, "Rio Alfandra", 55},
        {9950310962, "Ronaldo Valentino Uneputty", 80},
        {9970272750, "Achmad Yaumil Fadjri R.", 60},
        {9970293945, "Alivia Rahma Pramesti", 70},
        {9952382180, "Ari Lutfianto", 65},
        {9965653989, "Arief Budiman", 60}
    };

    int n = sizeof(arr) / sizeof(arr[0]);

    // Sorting by score in descending order
    cout << "Sorted by score in descending order using Selection Sort:" << endl;
    selectionSortByScore(arr, n);
    printArray(arr, n);

    // Sorting by ID in descending order
    cout << "\nSorted by ID in descending order using Selection Sort:" << endl;
    selectionSortById(arr, n);
    printArray(arr, n);

    return 0;
}
