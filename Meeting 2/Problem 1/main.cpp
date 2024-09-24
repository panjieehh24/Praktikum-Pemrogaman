#include <iostream>
#include <cmath>

using namespace std;
int main(){ 

cout << "Payslip for Employee" << endl;
cout << "--------------------" << endl;

  string Name;
cout <<"Name :";
cin>>Name;

float Gross;
cout << "Gross Salary: " << "IDR";
cin >> Gross;

float Tax = (0.20)*Gross;
cout << fixed << "Tax: " << "IDR" << Tax << endl;

float Installment;
cout << "Installment: " << "IDR";
cin >>Installment;

float Insurance;
cout << "Insurance: " << "IDR";
cin >>Insurance;

float net = Gross - Tax - Installment - Insurance;
cout << fixed << "Net Salary: " << "IDR" << net;


}