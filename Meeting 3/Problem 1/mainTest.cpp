#include <iostream>
#include <cmath>
#include <cassert>  // For assert

using namespace std;

int main() {
    // Test 1: Distinct real roots
    {
        float a = 1, b = -3, c = 2;
        float D = b*b - 4*a*c;
        assert(D > 0);  // D should be positive for real roots
        float x1 = (-b - sqrt(D)) / (2 * a);
        float x2 = (-b + sqrt(D)) / (2 * a);
        assert(x1 == 1 && x2 == 2);  // Expected roots are 1 and 2
        cout << "Test 1 passed!" << endl;
    }

    // Test 2: Repeated real root
    {
        float a = 1, b = -2, c = 1;
        float D = b*b - 4*a*c;
        assert(D == 0);  // D should be zero for repeated real root
        float x = -b / (2 * a);
        assert(x == 1);  // Expected repeated root is 1
        cout << "Test 2 passed!" << endl;
    }

    // Test 3: Imaginary roots
    {
        float a = 1, b = 1, c = 1;
        float D = b*b - 4*a*c;
        assert(D < 0);  // D should be negative for imaginary roots
        cout << "Test 3 passed!" << endl;
    }

    // Test 4: Invalid input (a == 0)
    {
        float a = 0, b = 1, c = 1;
        try {
            if (a == 0) {
                throw invalid_argument("Value of a can't be zero!");
            }
        } catch (const invalid_argument& e) {
            cout << "Test 4 passed (invalid input)!" << endl;
        }
    }

    return 0;
}
