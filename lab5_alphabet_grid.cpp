// Lab Task #5: Print a 5x5 grid of alphabets (A to E in each row) using nested for loops.
#include <iostream>
using namespace std;

int main() {
    for (int row = 1; row <= 5; row++) {
        for (char ch = 'A'; ch <= 'E'; ch++) {
            cout << ch << " ";
        }
        cout << endl;
    }

    return 0;
}
