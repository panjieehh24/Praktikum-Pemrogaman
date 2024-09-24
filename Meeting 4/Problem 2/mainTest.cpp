#include <bits/stdc++.h>
using namespace std;

int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    // Test Case 1: Multiplication table for 5
    {
        int n = 5;
        vector<string> expected_output = {
            "5 x 1 = 5", "5 x 2 = 10", "5 x 3 = 15", "5 x 4 = 20", "5 x 5 = 25",
            "5 x 6 = 30", "5 x 7 = 35", "5 x 8 = 40", "5 x 9 = 45", "5 x 10 = 50"
        };

        vector<string> result;
        for (int i = 1; i <= 10; i++) {
            int cnt = n * i;
            stringstream ss;
            ss << n << " x " << i << " = " << cnt;
            result.push_back(ss.str());
        }

        assert(result == expected_output);
        cout << "Test Case 1 passed: Multiplication table for 5 is correct.\n";
    }

    // Test Case 2: Multiplication table for 7
    {
        int n = 7;
        vector<string> expected_output = {
            "7 x 1 = 7", "7 x 2 = 14", "7 x 3 = 21", "7 x 4 = 28", "7 x 5 = 35",
            "7 x 6 = 42", "7 x 7 = 49", "7 x 8 = 56", "7 x 9 = 63", "7 x 10 = 70"
        };

        vector<string> result;
        for (int i = 1; i <= 10; i++) {
            int cnt = n * i;
            stringstream ss;
            ss << n << " x " << i << " = " << cnt;
            result.push_back(ss.str());
        }

        assert(result == expected_output);
        cout << "Test Case 2 passed: Multiplication table for 7 is correct.\n";
    }

    // Test Case 3: Multiplication table for 1
    {
        int n = 1;
        vector<string> expected_output = {
            "1 x 1 = 1", "1 x 2 = 2", "1 x 3 = 3", "1 x 4 = 4", "1 x 5 = 5",
            "1 x 6 = 6", "1 x 7 = 7", "1 x 8 = 8", "1 x 9 = 9", "1 x 10 = 10"
        };

        vector<string> result;
        for (int i = 1; i <= 10; i++) {
            int cnt = n * i;
            stringstream ss;
            ss << n << " x " << i << " = " << cnt;
            result.push_back(ss.str());
        }

        assert(result == expected_output);
        cout << "Test Case 3 passed: Multiplication table for 1 is correct.\n";
    }

    return 0;
}
