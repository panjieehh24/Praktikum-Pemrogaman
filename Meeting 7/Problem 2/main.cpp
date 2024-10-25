#include <iostream>
using namespace std;

int factorial(int n) {
    if (n == 0) {
        return 1;
    }
    return n * factorial(n - 1);
}
int main() {
    int n;
    cout << "Factorial of a number \n";
    cout << "----------------------\n";
    cout << "Enter a positive integer: \n";
    cin >> n;
    cout << "Factorial of " << n << " = " << factorial(n);
    return 0;
}
