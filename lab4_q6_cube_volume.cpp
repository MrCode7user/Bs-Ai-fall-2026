// Lab Task #4 - Q6: Calculate volume using V = length * width * height.
#include <iostream>
using namespace std;

int main() {
    double length, width, height;

    cout << "Enter length: ";
    cin >> length;
    cout << "Enter width : ";
    cin >> width;
    cout << "Enter height: ";
    cin >> height;

    double volume = length * width * height;

    cout << "Volume = " << volume << endl;

    return 0;
}
