// Programming Fundamentals - Assignment # 2: BMI Calculator
// Formula: BMI = Weight (kg) / (Height (m) * Height (m))
// Height is taken in feet + inches (as in the sample output) and converted to metres.
#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double weight, feet, inches;

    cout << "===== BMI CALCULATOR =====" << endl;
    cout << "Enter weight in kilograms: ";
    cin >> weight;
    cout << "Enter height in feet: ";
    cin >> feet;
    cout << "Enter remaining inches: ";
    cin >> inches;

    // Convert height to metres: 1 foot = 12 inches, 1 inch = 0.0254 m
    double totalInches = feet * 12 + inches;
    double heightMeters = totalInches * 0.0254;

    // Input validation
    if (weight <= 0 || feet < 0 || inches < 0 || heightMeters <= 0) {
        cout << "\nError: weight and height must be greater than zero (no negative values)." << endl;
        return 1;
    }

    double bmi = weight / (heightMeters * heightMeters);

    cout << fixed << setprecision(2);
    cout << "\nYour BMI is: " << bmi << endl;

    cout << "Status: ";
    if (bmi < 18.5)
        cout << "Underweight" << endl;
    else if (bmi < 25.0)
        cout << "Normal" << endl;
    else if (bmi < 40.0)
        cout << "Overweight" << endl;
    else
        cout << "Obese" << endl;

    cout << "\nThank you for using BMI Calculator!" << endl;

    return 0;
}
