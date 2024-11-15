#include <iostream>
#include <string>

using namespace std;


struct student {
    long int StudId;
    string name;
    int data; 
};


void sequentialSearchAndChangeName(student arr[], int n, int targetScore, const string& newName) {
    for (int i = 0; i < n; ++i) {
        if (arr[i].data == targetScore) {
            arr[i].name = newName; 
        }
    }
}


void printArray(const student arr[], int n) {
    for (int i = 0; i < n; ++i) {
        cout << "ID: " << arr[i].StudId << ", Name: " << arr[i].name << ", Score: " << arr[i].data << endl;
    }
}

int main() {
    
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

    
    cout << "Original student data:" << endl;
    printArray(arr, n);

    
    sequentialSearchAndChangeName(arr, n, 60, "Joko");

    
    cout << "\nUpdated student data (Name changed to Joko for score 60):" << endl;
    printArray(arr, n);

    return 0;
}
