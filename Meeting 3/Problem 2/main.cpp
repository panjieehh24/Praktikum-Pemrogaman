#include <iostream>

using namespace std;

int main()
{

int counter = 0;
int number = 0;
int largest = -1000;

cout << "Please enter up to 3 numbers and I will print the largest one on the screen. \n";

while (counter < 3)
{
    cout << "Number: ";
    cin >> number;
    counter++;

    if (number > largest)
    {
        largest = number;
    }   
}
cout << "The largest number was: " << largest;
return 0;

}
