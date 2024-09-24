#include <iostream>
#include <vector>
#include <algorithm> // For std::reverse

// Function to reverse a vector
std::vector<int> reverseVector(const std::vector<int>& input) {
    std::vector<int> reversed(input);  // Create a copy of the input vector
    std::reverse(reversed.begin(), reversed.end());  // Reverse the vector
    return reversed;
}

int main() {
    int n;

    // Input: number of elements in the array
    std::cout << "Enter the number of elements: ";
    std::cin >> n;

    std::vector<int> input(n);

    // Input: elements of the array
    std::cout << "Enter " << n << " numbers: ";
    for (int i = 0; i < n; ++i) {
        std::cin >> input[i];
    }

    // Reverse the vector
    std::vector<int> output = reverseVector(input);

    // Output: print the reversed vector
    std::cout << "Reversed array: ";
    for (int num : output) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    return 0;
}
