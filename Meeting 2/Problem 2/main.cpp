#include <iostream>
#include <cmath>
using namespace std;
int main()
{
float a,b,c,D,x1,x2,x;
cout <<"Please type the value of a" << endl;
cin >> a;
cout <<"Please type the value of b" << endl;
cin >> b;
cout <<"Please type the value of c" << endl;
cin >> c;
 D = b*b - 4*a*c;
    if (a == 0){
        cout << "value of a can't be zero!";
    }
    else if (D > 0) {
        x1 = (-b - sqrt(D)) / (2 * a);
        x2 = (-b + sqrt(D)) / (2 * a);
        cout << "x1 = " << x1 << " and x2 = " << x2 << endl;
    } 
    else if (D == 0) {
        x = -b / (2 * a);
        cout << "x = " << x << endl;
    } 
    else {
        cout << "The roots are imaginary (complex)." << endl;
    }

return 0;
}