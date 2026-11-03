// Lab Task #4 - Q7: Marks in five subjects -> total marks and percentage.
// Each subject is assumed to be out of 100 marks (total = 500).
#include <iostream>
using namespace std;

int main() {
    double m1, m2, m3, m4, m5;

    cout << "Enter marks of 5 subjects (out of 100 each): ";
    cin >> m1 >> m2 >> m3 >> m4 >> m5;

    double total = m1 + m2 + m3 + m4 + m5;
    double percentage = (total / 500) * 100;

    cout << "Total marks = " << total << " / 500" << endl;
    cout << "Percentage  = " << percentage << "%" << endl;

    return 0;
}
