#include <iostream>
#include <cmath>

using namespace std;
int main(){ 

cout << "Payslip for Employee" << endl;
cout << "--------------------" << endl;

string Name = "panjiiii";
// cout <<"Name :";
// cin>>Name;

float Gross = 9000000;
// cout << "Gross Salary: " << "IDR";
// cin >> Gross;

float Tax = (0.20)*Gross;
// cout << fixed << "Tax: " << "IDR" << Tax << endl;

float Installment = 800000;
// cout << "Installment: " << "IDR";
// cin >>Installment;

float Insurance = 1500000;
// cout << "Insurance: " << "IDR";
// cin >>Insurance;

float expectedNet = 4900000;

float net = Gross - Tax - Installment - Insurance;

if(expectedNet==net) cout<<"Success"<<'\n';
else cout<<"Failed"<<'\n';


}
