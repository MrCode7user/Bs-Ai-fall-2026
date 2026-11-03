// Lab Task #4 - Task 2: Display a message according to the temperature.
#include <iostream>
using namespace std;

int main() {
    double temperature;

    cout << "Enter the temperature: ";
    cin >> temperature;

    if (temperature > 35)
        cout << "It is a hot day." << endl;
    else if (temperature >= 25 && temperature <= 35)
        cout << "It is a pleasant day." << endl;
    else
        cout << "It is a cool day." << endl;

    return 0;
}
