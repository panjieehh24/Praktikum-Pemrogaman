#include <iostream>
#include <cmath>
#include <cassert>  // For testing assertions

using namespace std;

// Function to calculate tax
float calculateTax(float gross) {
    return 0.20 * gross;
}

// Function to calculate net salary
float calculateNetSalary(float gross, float tax, float installment, float insurance) {
    return gross - tax - installment - insurance;
}

// Test runner function
void runTest() {
    // Test 1: Gross = 5000, Installment = 1000, Insurance = 500
    float gross = 5000;
    float tax = calculateTax(gross);
    float net = calculateNetSalary(gross, tax, 1000, 500);
    assert(tax == 1000);  // Tax should be 20% of gross (5000 * 0.2 = 1000)
    assert(net == 3500);  // Net should be 5000 - 1000 (tax) - 1000 (installment) - 500 (insurance)
    
    // Test 2: Gross = 10000, Installment = 2000, Insurance = 1000
    gross = 10000;
    tax = calculateTax(gross);
    net = calculateNetSalary(gross, tax, 2000, 1000);
    assert(tax == 2000);  // 20% of 10000 = 2000
    assert(net == 7000);  // 10000 - 2000 - 2000 - 1000 = 7000
    
    cout << "All tests passed!" << endl;
}

int main() {
    // Run the tests
    runTest();
    return 0;
}
