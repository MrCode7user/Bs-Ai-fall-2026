// Lab Task #1 - Q1: Input age in years, display age in months and days.
#include <iostream>
using namespace std;

int main() {
    double years;

    cout << "Enter your age in years: ";
    cin >> years;

    double months = years * 12;
    double days = years * 365;

    cout << "Age in months: " << months << endl;
    cout << "Age in days  : " << days << endl;

    return 0;
}
