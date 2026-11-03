// Lab Task 3: Marks of three subjects. If average > 80, display two messages.
#include <iostream>
using namespace std;

int main() {
    double m1, m2, m3;

    cout << "Enter marks of three subjects: ";
    cin >> m1 >> m2 >> m3;

    double average = (m1 + m2 + m3) / 3;
    cout << "Average marks = " << average << endl;

    if (average > 80) {
        cout << "You are above standard" << endl;
        cout << "Admission Granted" << endl;
    }

    return 0;
}
