#include <iostream>
#include <string>

using namespace std;

// Define a struct to hold each student's information
struct student {
    long int StudId;
    string name;
    int data; // This represents the score
};

// Insertion Sort function to sort by `data` (score) in descending order
void sortByScoreDescending(student arr[], int n) {
    for (int i = 1; i < n; ++i) {
        student key = arr[i];
        int j = i - 1;

        // Move elements of arr[0...i-1] that are less than key.data to one position ahead
        while (j >= 0 && arr[j].data < key.data) {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
}

// Insertion Sort function to sort by `StudId` in descending order
void sortByIdDescending(student arr[], int n) {
    for (int i = 1; i < n; ++i) {
        student key = arr[i];
        int j = i - 1;

        // Move elements of arr[0...i-1] that are less than key.StudId to one position ahead
        while (j >= 0 && arr[j].StudId < key.StudId) {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
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
    cout << "Sorted by score in descending order:" << endl;
    sortByScoreDescending(arr, n);
    printArray(arr, n);

    // Sorting by ID in descending order
    cout << "\nSorted by ID in descending order:" << endl;
    sortByIdDescending(arr, n);
    printArray(arr, n);

    return 0;
}
