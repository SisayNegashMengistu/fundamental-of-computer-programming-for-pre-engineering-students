// Example 14-01: Exception handling – Safe division

#include <iostream>
#include <stdexcept>
using namespace std;

double safeDivide(double a, double b) {
    if (b == 0.0)
        throw invalid_argument("Divisor cannot be zero.");
    return a / b;
}

int main() {
    double x, y;
    cout << "Enter numerator   : ";
    cin >> x;
    cout << "Enter denominator : ";
    cin >> y;

    try {
        double result = safeDivide(x, y);
        cout << x << " / " << y << " = " << result << endl;
    } catch (const invalid_argument& e) {
        cerr << "Error: " << e.what() << endl;
    }

    return 0;
}
