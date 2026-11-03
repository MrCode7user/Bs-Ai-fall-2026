// Lab Task #4 - Task 1: Check whether a character is a vowel (if-else).
#include <iostream>
using namespace std;

int main() {
    char ch;

    cout << "Enter a character: ";
    cin >> ch;

    if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
        ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') {
        cout << "\"is a vowel\"" << endl;
    } else {
        cout << "\"is not a vowel\"" << endl;
    }

    return 0;
}
