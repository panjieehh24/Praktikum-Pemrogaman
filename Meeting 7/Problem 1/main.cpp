#include <iostream>
using namespace std; 
int add(int a, int b) {
    return a + b; 
    } 
int subs(int a, int b){
    return a - b; 
}
int mul(int a, int b) {
    return a * b; 
} 
int divi(int a, int b){
    return a / b; 
} 
int main(){
    int a, b; 
    cout << "Enter two numbers \n";
    cout << "---------------------- \n";
    cout << "Enter first number: \n";
    cin >> a;
    cout << "Enter second number: \n";
    cin >> b;
    
    
    cout << "Addition: " << add(a, b) << endl;
    cout << "Substraction: " << subs(a, b) << endl;
    cout << "Multiplication: " << mul(a, b) << endl;
    cout << "Division: " << divi(a, b) << endl;
    return 0; }
