// Lab Task #5: Display all possible two-digit combinations of numbers in the range 1 to 4.
#include <iostream>
using namespace std;

int main() {
    for (int tens = 1; tens <= 4; tens++) {
        for (int ones = 1; ones <= 4; ones++) {
            cout << tens << ones << "\t";
        }
        cout << endl;
    }

    return 0;
}
