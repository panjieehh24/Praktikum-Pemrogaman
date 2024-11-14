#include <iostream>
#include <string>

using namespace std;

// Define a struct to hold each student's information
struct student {
    long int StudId;
    string name;
    int data; // This represents the score
};

// Function to perform sequential search (linear search) and change name to "Joko"
void sequentialSearchAndChangeName(student arr[], int n, int targetScore, const string& newName) {
    for (int i = 0; i < n; ++i) {
        if (arr[i].data == targetScore) {
            arr[i].name = newName; // Change the name to "Joko" when the score is 60
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

    // Print the original array
    cout << "Original student data:" << endl;
    printArray(arr, n);

    // Call the sequential search method to change the name of students with score 60
    sequentialSearchAndChangeName(arr, n, 60, "Joko");

    // Print the updated array
    cout << "\nUpdated student data (Name changed to Joko for score 60):" << endl;
    printArray(arr, n);

    return 0;
}
