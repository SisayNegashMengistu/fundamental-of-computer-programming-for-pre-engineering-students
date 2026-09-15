// Example 14-02: Common logic error – operator precedence bug
// Shows both the buggy and correct version.

#include <iostream>
using namespace std;

int main() {
    int a = 10, b = 20, c = 30;

    // BUG: division happens before addition
    double wrongAvg = a + b + c / 3;
    cout << "Wrong average : " << wrongAvg << endl;   // 40, not 20

    // FIX: use parentheses and floating-point division
    double correctAvg = (a + b + c) / 3.0;
    cout << "Correct average: " << correctAvg << endl; // 20

    return 0;
}
