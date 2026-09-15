// Example 02-02: Hooke's Law – Force Calculation
// Engineering application demonstrating algorithm-to-code translation.
// Formula: F = k * x

#include <iostream>
using namespace std;

int main() {
    double k, x, F;
    cout << "=== Hooke's Law: Force Calculator ===" << endl;
    cout << "Enter spring constant k (N/m): ";
    cin >> k;
    cout << "Enter displacement x (m): ";
    cin >> x;
    F = k * x;
    cout << "Force F = " << F << " N" << endl;
    return 0;
}
