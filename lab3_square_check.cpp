// Lab Task 3: Input two numbers and find if the second number is the square of the first.
#include <iostream>
using namespace std;

int main() {
    int first, second;

    cout << "Enter first number : ";
    cin >> first;
    cout << "Enter second number: ";
    cin >> second;

    if (second == first * first)
        cout << second << " is the square of " << first << endl;
    else
        cout << second << " is NOT the square of " << first << endl;

    return 0;
}
