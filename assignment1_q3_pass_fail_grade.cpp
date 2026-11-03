// Programming Fundamentals - Assignment # 1, Q3 (C++ version of the flowchart problem)
// Marks >= 40 : "Pass" and then Grade A (>=80), Grade B (>=60), otherwise Grade C.
// Marks < 40  : "Fail".
#include <iostream>
using namespace std;

int main() {
    double marks;

    cout << "Enter marks of the student: ";
    cin >> marks;

    if (marks >= 40) {
        cout << "Pass" << endl;
        if (marks >= 80)
            cout << "Grade A" << endl;
        else if (marks >= 60)
            cout << "Grade B" << endl;
        else
            cout << "Grade C" << endl;
    } else {
        cout << "Fail" << endl;
    }

    return 0;
}
