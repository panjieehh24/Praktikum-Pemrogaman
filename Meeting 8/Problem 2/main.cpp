#include <iostream>
#include <string>

using namespace std;

// Define a struct to hold each student's information
struct student {
    long int StudId;
    string name;
    int data; // This represents the score
};

// Function to perform binary search on the array based on StudId
int binarySearch(student arr[], int n, long int target) {
    int left = 0, right = n - 1;
    
    while (left <= right) {
        int mid = left + (right - left) / 2;

        // Check if the target is at mid
        if (arr[mid].StudId == target) {
            return mid; // return the index of the student
        }

        // If target is greater, ignore left half
        if (arr[mid].StudId < target) {
            left = mid + 1;
        }
        // If target is smaller, ignore right half
        else {
            right = mid - 1;
        }
    }
    
    // Return -1 if the target is not found
    return -1;
}

// Selection Sort function to sort by `StudId` in ascending order
void selectionSortById(student arr[], int n) {
    for (int i = 0; i < n - 1; ++i) {
        int minIndex = i;

        // Find the minimum element in the unsorted portion of the array
        for (int j = i + 1; j < n; ++j) {
            if (arr[j].StudId < arr[minIndex].StudId) {
                minIndex = j;
            }
        }

        // Swap the found minimum element with the first element of the unsorted portion
        if (minIndex != i) {
            student temp = arr[i];
            arr[i] = arr[minIndex];
            arr[minIndex] = temp;
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

    // First, sort the array by StudId in ascending order using Selection Sort
    selectionSortById(arr, n);

    // Print the sorted array
    cout << "Sorted student data by ID:" << endl;
    printArray(arr, n);

    // The NISN (StudId) we are looking for
    long int targetNISN = 9950310962;

    // Perform binary search to find the student with the target NISN
    int resultIndex = binarySearch(arr, n, targetNISN);

    if (resultIndex != -1) {
        // If the student is found, print their details
        cout << "\nStudent found:" << endl;
        cout << "ID: " << arr[resultIndex].StudId << ", Name: " << arr[resultIndex].name << ", Score: " << arr[resultIndex].data << endl;
    } else {
        // If the student is not found
        cout << "\nStudent with NISN " << targetNISN << " not found." << endl;
    }

    return 0;
}
