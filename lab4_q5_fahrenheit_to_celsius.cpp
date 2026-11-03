// Lab Task #4 - Q5: Convert Fahrenheit to Celsius using c = 5/9 * (f - 32).
#include <iostream>
using namespace std;

int main() {
    double f;

    cout << "Enter temperature in Fahrenheit: ";
    cin >> f;

    // 5.0 / 9.0 (not 5 / 9) so integer division does not give 0
    double c = (5.0 / 9.0) * (f - 32);

    cout << f << " F = " << c << " C" << endl;

    return 0;
}
