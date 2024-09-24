#include <iostream>
#include <cassert> // For testing assertions

using namespace std;

int main() {
    // Test case 1: Normal input (largest is positive)
    {
        int counter = 0;
        int number = 0;
        int largest = -1000; // Initial value to ensure any number entered is larger

        // Simulating input: 3, 5, 2
        int inputs[] = {3, 5, 2};
        for (int i = 0; i < 3; ++i) {
            number = inputs[i];
            counter++;
            if (number > largest) {
                largest = number;
            }
        }
        assert(largest == 5); // Expected largest number is 5
        cout << "Test case 1 passed! Largest number is: " << largest << endl;
    }

    // Test case 2: Including negative numbers
    {
        int counter = 0;
        int number = 0;
        int largest = -1000;

        // Simulating input: -1, -5, -3
        int inputs[] = {-1, -5, -3};
        for (int i = 0; i < 3; ++i) {
            number = inputs[i];
            counter++;
            if (number > largest) {
                largest = number;
            }
        }
        assert(largest == -1); // Expected largest number is -1
        cout << "Test case 2 passed! Largest number is: " << largest << endl;
    }

    // Test case 3: All numbers are the same
    {
        int counter = 0;
        int number = 0;
        int largest = -1000;

        // Simulating input: 4, 4, 4
        int inputs[] = {4, 4, 4};
        for (int i = 0; i < 3; ++i) {
            number = inputs[i];
            counter++;
            if (number > largest) {
                largest = number;
            }
        }
        assert(largest == 4); // Expected largest number is 4
        cout << "Test case 3 passed! Largest number is: " << largest << endl;
    }

    // Test case 4: All numbers negative
    {
        int counter = 0;
        int number = 0;
        int largest = -1000;

        // Simulating input: -2, -1, -3
        int inputs[] = {-2, -1, -3};
        for (int i = 0; i < 3; ++i) {
            number = inputs[i];
            counter++;
            if (number > largest) {
                largest = number;
            }
        }
        assert(largest == -1); // Expected largest number is -1
        cout << "Test case 4 passed! Largest number is: " << largest << endl;
    }

    return 0;
}
