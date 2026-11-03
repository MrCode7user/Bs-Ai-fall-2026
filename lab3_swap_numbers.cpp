// Lab Task 3: Input two numbers, swap the values and display them.
#include <iostream>
using namespace std;

int main() {
    int first, second, temp;

    cout << "Enter your first number =";
    cin >> first;
    cout << "Enter your second number =";
    cin >> second;

    temp = first;
    first = second;
    second = temp;

    cout << "The values after swapping are" << endl;
    cout << "The value of first number =" << first << endl;
    cout << "The value of second number =" << second << endl;

    return 0;
}
