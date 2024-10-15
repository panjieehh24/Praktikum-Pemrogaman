#include <iostream>
#include <vector>
#include <algorithm> // For std::reverse


using namespace std;




vector<int> reverseVector(const vector<int>& input) {
    vector<int> reversed(input);  // Create a copy of the input vector
    reverse(reversed.begin(), reversed.end());  // Reverse the vector
    return reversed;
}


int main() {
    int n;


    // Input: number of elements in the array
    cout << "Enter the number of elements: ";
    cin >> n;


    vector<int> input(n);


    // Input: elements of the array
    cout << "Enter " << n << " numbers: ";
    for (int i = 0; i < n; ++i) {
        cin >> input[i];
    }


    // Reverse the vector
    vector<int> output = reverseVector(input);


    // Output: print the reversed vector
    cout << "Reversed array: ";
    for (int num : output) {
        cout << num << " ";
    }
    cout << endl;


    return 0;
}
