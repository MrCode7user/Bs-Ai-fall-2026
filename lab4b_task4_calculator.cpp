// Lab Task #4 - Task 4 (Q1): Menu-driven calculator using the switch statement.
// Runs until the user selects the exit option.
#include <iostream>
#include <cmath>      // math.h functions: sin, cos, tan, sqrt
using namespace std;

int main() {
    const double PI = 3.14159265358979323846;
    int choice;

    do {
        cout << "\n========== CALCULATOR MENU ==========" << endl;
        cout << " 1.  Addition of two integers" << endl;
        cout << " 2.  Subtraction of two integers" << endl;
        cout << " 3.  Multiplication of two integers" << endl;
        cout << " 4.  Division of two integers" << endl;
        cout << " 5.  Addition of two floating point numbers" << endl;
        cout << " 6.  Subtraction of two floating point numbers" << endl;
        cout << " 7.  Multiplication of two floating point numbers" << endl;
        cout << " 8.  Division of two floating point numbers" << endl;
        cout << " 9.  Sine" << endl;
        cout << " 10. Cosine" << endl;
        cout << " 11. Tangent" << endl;
        cout << " 12. Square root" << endl;
        cout << " 13. Square" << endl;
        cout << " 14. Cube" << endl;
        cout << " 0.  Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        int a, b;
        double x, y;

        switch (choice) {
        case 1:
            cout << "Enter two integers: ";
            cin >> a >> b;
            cout << "Result = " << a + b << endl;
            break;
        case 2:
            cout << "Enter two integers: ";
            cin >> a >> b;
            cout << "Result = " << a - b << endl;
            break;
        case 3:
            cout << "Enter two integers: ";
            cin >> a >> b;
            cout << "Result = " << a * b << endl;
            break;
        case 4:
            cout << "Enter two integers: ";
            cin >> a >> b;
            if (b == 0)
                cout << "Error: division by zero is not allowed." << endl;
            else
                cout << "Quotient = " << a / b << ", Remainder = " << a % b << endl;
            break;
        case 5:
            cout << "Enter two floating point numbers: ";
            cin >> x >> y;
            cout << "Result = " << x + y << endl;
            break;
        case 6:
            cout << "Enter two floating point numbers: ";
            cin >> x >> y;
            cout << "Result = " << x - y << endl;
            break;
        case 7:
            cout << "Enter two floating point numbers: ";
            cin >> x >> y;
            cout << "Result = " << x * y << endl;
            break;
        case 8:
            cout << "Enter two floating point numbers: ";
            cin >> x >> y;
            if (y == 0)
                cout << "Error: division by zero is not allowed." << endl;
            else
                cout << "Result = " << x / y << endl;
            break;
        case 9:
            cout << "Enter angle in degrees: ";
            cin >> x;
            cout << "sin(" << x << ") = " << sin(x * PI / 180.0) << endl;
            break;
        case 10:
            cout << "Enter angle in degrees: ";
            cin >> x;
            cout << "cos(" << x << ") = " << cos(x * PI / 180.0) << endl;
            break;
        case 11:
            cout << "Enter angle in degrees: ";
            cin >> x;
            cout << "tan(" << x << ") = " << tan(x * PI / 180.0) << endl;
            break;
        case 12:
            cout << "Enter a number: ";
            cin >> x;
            if (x < 0)
                cout << "Error: square root of a negative number is not real." << endl;
            else
                cout << "sqrt(" << x << ") = " << sqrt(x) << endl;
            break;
        case 13:
            cout << "Enter a number: ";
            cin >> x;
            cout << "Square = " << x * x << endl;
            break;
        case 14:
            cout << "Enter a number: ";
            cin >> x;
            cout << "Cube = " << x * x * x << endl;
            break;
        case 0:
            cout << "Exiting the calculator. Goodbye!" << endl;
            break;
        default:
            cout << "Invalid choice! Please select from the menu." << endl;
        }
    } while (choice != 0);

    return 0;
}
