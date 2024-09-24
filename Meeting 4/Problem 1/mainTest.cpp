#include <iostream>
#include <cassert>
#include <sstream>
using namespace std;

void print_multiplication_table(int n, ostream &out = cout) {
    for (int i = 1; i <= 10; i++) {
        out << n << " x " << i << " = " << n * i << '\n';
    }
}

int main() {
    // Test case for n = 5
    {
        stringstream output;
        print_multiplication_table(5, output);
        string expected_output = 
            "5 x 1 = 5\n5 x 2 = 10\n5 x 3 = 15\n5 x 4 = 20\n5 x 5 = 25\n"
            "5 x 6 = 30\n5 x 7 = 35\n5 x 8 = 40\n5 x 9 = 45\n5 x 10 = 50\n";
        assert(output.str() == expected_output);
        cout << "Test case for 5 passed.\n";
    }

    // Test case for n = 3
    {
        stringstream output;
        print_multiplication_table(3, output);
        string expected_output = 
            "3 x 1 = 3\n3 x 2 = 6\n3 x 3 = 9\n3 x 4 = 12\n3 x 5 = 15\n"
            "3 x 6 = 18\n3 x 7 = 21\n3 x 8 = 24\n3 x 9 = 27\n3 x 10 = 30\n";
        assert(output.str() == expected_output);
        cout << "Test case for 3 passed.\n";
    }

    return 0;
}
