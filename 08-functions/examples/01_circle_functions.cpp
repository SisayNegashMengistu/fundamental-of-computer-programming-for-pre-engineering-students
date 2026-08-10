// Example 08-01: Basic function – Circle area and circumference

#include <iostream>
#include <cmath>
using namespace std;

const double PI = 3.14159265358979;

double circleArea(double radius) {
    return PI * radius * radius;
}

double circleCircumference(double radius) {
    return 2.0 * PI * radius;
}

int main() {
    double r;
    cout << "Enter circle radius (m): ";
    cin >> r;

    cout << "Area          = " << circleArea(r) << " m^2" << endl;
    cout << "Circumference = " << circleCircumference(r) << " m" << endl;

    return 0;
}
