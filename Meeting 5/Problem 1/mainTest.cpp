#include <iostream>
#include <vector>
#include <string>
#include <cassert>  // For assertions in test cases

// Function to generate FizzBuzz from 1 to n
std::vector<std::string> fizzBuzz(int n) {
    std::vector<std::string> result;

    for (int i = 1; i <= n; ++i) {
        if (i % 3 == 0 && i % 5 == 0) {
            result.push_back("FizzBuzz");
        } else if (i % 3 == 0) {
            result.push_back("Fizz");
        } else if (i % 5 == 0) {
            result.push_back("Buzz");
        } else {
            result.push_back(std::to_string(i));
        }
    }

    return result;
}

// Function to run a single test case
void run_test(const std::vector<std::string>& expected, int n) {
    std::vector<std::string> result = fizzBuzz(n);
    assert(result == expected);  // Assert that the output matches the expected result
    std::cout << "Test passed for n = " << n << std::endl;
}

// Test runner
void maketest() {
    // Test case 1: FizzBuzz from 1 to 15
    run_test({"1", "2", "Fizz", "4", "Buzz", "Fizz", "7", "8", "Fizz", "Buzz", "11", "Fizz", "13", "14", "FizzBuzz"}, 15);
    
    // Test case 2: FizzBuzz from 1 to 5
    run_test({"1", "2", "Fizz", "4", "Buzz"}, 5);

    // Add more test cases as needed
}

int main() {
    maketest();  // Run all tests
    return 0;
}
