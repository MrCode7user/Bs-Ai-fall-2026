// Lab Task #1 - Q4: Input number of students and fee per student, display total fee collected.
#include <iostream>
using namespace std;

int main() {
    int students;
    double feePerStudent;

    cout << "Enter total number of students in the class: ";
    cin >> students;
    cout << "Enter fee per student: ";
    cin >> feePerStudent;

    double totalFee = students * feePerStudent;

    cout << "Total fee collected from the class = " << totalFee << endl;

    return 0;
}
