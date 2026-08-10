// Example 03-01: Program structure with comments and preprocessor directives

#include <iostream>   // for cin and cout
#include <cmath>      // for sqrt()

#define PI 3.14159    // constant: value of pi

using namespace std;

int main() {
    // Calculate the circumference of a circle
    double radius = 5.0;  // radius in meters
    double circumference = 2 * PI * radius;
    double area = PI * radius * radius;

    cout << "Circle with radius = " << radius << " m" << endl;
    cout << "Circumference = " << circumference << " m" << endl;
    cout << "Area          = " << area << " m^2" << endl;

    return 0;
}
