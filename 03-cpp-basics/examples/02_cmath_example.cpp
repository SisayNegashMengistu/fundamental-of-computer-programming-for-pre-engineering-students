// Example 03-02: Using cmath library for engineering calculations

#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double base = 3.0;
    double height = 4.0;

    // Pythagorean theorem: hypotenuse = sqrt(a^2 + b^2)
    double hypotenuse = sqrt(pow(base, 2) + pow(height, 2));

    cout << "Right triangle with sides " << base << " and " << height << endl;
    cout << "Hypotenuse = " << hypotenuse << endl;

    return 0;
}
