// Lab Task #5: Print an inverted right triangle of stars using nested for loops.
#include <iostream>
using namespace std;

int main() {
    for (int row = 5; row >= 1; row--) {
        for (int star = 1; star <= row; star++) {
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}
