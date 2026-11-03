// Lab Task 3: Input a number and determine whether it is positive, negative or 0.
#include <iostream>
using namespace std;

int main() {
    double number;

    cout << "Enter a number: ";
    cin >> number;

    if (number > 0)
        cout << "The number is positive" << endl;
    else if (number < 0)
        cout << "The number is negative" << endl;
    else
        cout << "The number is 0" << endl;

    return 0;
}
