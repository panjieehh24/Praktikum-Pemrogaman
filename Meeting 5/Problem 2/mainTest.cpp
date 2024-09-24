#include <iostream>
#include <vector>
#include <algorithm> // For std::reverse
#include <cassert>   // For assert

// Function to reverse a vector
std::vector<int> reverseVector(const std::vector<int>& input) {
    std::vector<int> reversed(input);  // Create a copy of the input vector
    std::reverse(reversed.begin(), reversed.end());  // Reverse the vector
    return reversed;
}

// Function to run tests
void runTest(const std::vector<int>& input, const std::vector<int>& expected) {
    std::vector<int> result = reverseVector(input);
    assert(result == expected); // Ensure the result matches the expected output
    std::cout << "Test passed!" << std::endl;
}

// Test runner function
void maketest() {
    // Test case 1
    runTest({1, 2, 3, 4, 5}, {5, 4, 3, 2, 1});
    
    // Test case 2
    runTest({10, 20, 30, 40, 50}, {50, 40, 30, 20, 10});

    // Test case 3
    runTest({1}, {1}); // Single element case

    // Test case 4
    runTest({}, {}); // Empty array case
}

int main() {
    // Call the maketest function to run the tests
    maketest();
    return 0;
}
