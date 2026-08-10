// Example 06-03: Engineering – Structural safety factor check

#include <iostream>
using namespace std;

int main() {
    double load, capacity;

    cout << "=== Beam Safety Checker ===" << endl;
    cout << "Enter applied load (kN)  : ";
    cin >> load;
    cout << "Enter beam capacity (kN) : ";
    cin >> capacity;

    if (load <= 0 || capacity <= 0) {
        cout << "Error: Values must be positive." << endl;
        return 1;
    }

    double safetyFactor = capacity / load;
    cout << "Safety Factor = " << safetyFactor << endl;

    if (safetyFactor >= 2.0) {
        cout << "Status: SAFE" << endl;
    } else if (safetyFactor >= 1.0) {
        cout << "Status: MARGINAL – review design" << endl;
    } else {
        cout << "Status: UNSAFE – redesign required!" << endl;
    }

    return 0;
}
