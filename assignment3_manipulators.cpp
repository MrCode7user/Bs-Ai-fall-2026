// Programming Fundamentals - Assignment # 3: C++ Manipulators
// Replace "Your Name" below with your own name before running / taking the screenshot.
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main() {

    string msg = "Your Name";   // <-- write your name here
    double value = 123.456789;

    cout << setfill('*') << setw(25) << msg << endl;
    cout << setfill('@') << setw(20) << msg << endl;
    cout << setfill('=') << setw(16) << msg << endl;
    cout << endl << "Using setprecision:" << endl;
    cout << fixed << setprecision(2);
    cout << "Value with 2 decimal places: " << value << endl;
    cout << fixed << setprecision(4);
    cout << "Value with 4 decimal places: " << value << endl;

    return 0;
}
