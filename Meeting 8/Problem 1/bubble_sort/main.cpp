#include <iostream>
#include <string>

using namespace std;

// Define a struct to hold each student's information
struct student {
    long int StudId;
    string name;
    int data; // This represents the score
};

// Bubble Sort function to sort by `data` (score) in descending order
void bubbleSortByScore(student arr[], int n) {
    for (int i = 0; i < n - 1; ++i) {
        for (int j = 0; j < n - i - 1; ++j) {
            if (arr[j].data < arr[j + 1].data) { // Swap if the next element has a higher score
                student temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

// Bubble Sort function to sort by `StudId` in descending order
void bubbleSortById(student arr[], int n) {
    for (int i = 0; i < n - 1; ++i) {
        for (int j = 0; j < n - i - 1; ++j) {
            if (arr[j].StudId < arr[j + 1].StudId) { // Swap if the next element has a higher ID
                student temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
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
    cout << "Sorted by score in descending order using Bubble Sort:" << endl;
    bubbleSortByScore(arr, n);
    printArray(arr, n);

    // Sorting by ID in descending order
    cout << "\nSorted by ID in descending order using Bubble Sort:" << endl;
    bubbleSortById(arr, n);
    printArray(arr, n);

    return 0;
}
