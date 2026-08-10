// Example 04-02: Arithmetic operators and type casting

#include <iostream>
using namespace std;

int main() {
    int a = 10, b = 3;

    cout << "a = " << a << ", b = " << b << endl;
    cout << "a + b = " << a + b << endl;
    cout << "a - b = " << a - b << endl;
    cout << "a * b = " << a * b << endl;
    cout << "a / b = " << a / b << " (integer division)" << endl;
    cout << "a % b = " << a % b << " (remainder)" << endl;

    // Type casting for floating-point division
    cout << "a / b (float) = " << static_cast<double>(a) / b << endl;

    return 0;
}
