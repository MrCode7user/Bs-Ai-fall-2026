// Lab Task #4 - Task 4 (Q2): Convert seconds into hours, minutes and seconds.
// Example: 7802 -> 2 hrs 10 mins 2 secs
#include <iostream>
using namespace std;

int main() {
    int totalSeconds;

    cout << "Enter number of seconds: ";
    cin >> totalSeconds;

    int hours = totalSeconds / 3600;          // integer division
    int minutes = (totalSeconds % 3600) / 60; // remainder, then divide
    int seconds = totalSeconds % 60;          // modulus

    cout << hours << " hrs " << minutes << " mins " << seconds << " secs" << endl;

    return 0;
}
