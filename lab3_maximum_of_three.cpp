// Lab Task 3: Input three numbers and display the maximum number.
#include <iostream>
using namespace std;

int main() {
    double a, b, c;

    cout << "Enter three numbers: ";
    cin >> a >> b >> c;

    double maximum = a;
    if (b > maximum) maximum = b;
    if (c > maximum) maximum = c;

    cout << "Maximum number = " << maximum << endl;

    return 0;
}
