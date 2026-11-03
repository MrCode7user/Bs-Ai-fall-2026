// Lab Task #1 - Q3: Convert miles into kilometres (1 mile = 1.069 km as given in the task).
#include <iostream>
using namespace std;

int main() {
    double miles;
    const double MILE_TO_KM = 1.069;

    cout << "Enter distance in miles: ";
    cin >> miles;

    double km = miles * MILE_TO_KM;

    cout << miles << " miles = " << km << " kilometres" << endl;

    return 0;
}
