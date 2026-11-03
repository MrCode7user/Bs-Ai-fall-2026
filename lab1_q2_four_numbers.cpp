// Lab Task #1 - Q2: Input 4 numbers, calculate sum, average and product.
#include <iostream>
using namespace std;

int main() {
    double n1, n2, n3, n4;

    cout << "Enter four numbers: ";
    cin >> n1 >> n2 >> n3 >> n4;

    double sum = n1 + n2 + n3 + n4;
    double average = sum / 4;
    double product = n1 * n2 * n3 * n4;

    cout << "Sum     = " << sum << endl;
    cout << "Average = " << average << endl;
    cout << "Product = " << product << endl;

    return 0;
}
