#include <iostream>
#include <vector>
#include <string>

int main() {
    std::vector<std::string> result;

    // Loop from 1 to 100
    for (int i = 1; i <= 100; ++i) {
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

    // Print the result
    for (const auto& str : result) {
        std::cout << str << ' ';
    }

    return 0;
}
