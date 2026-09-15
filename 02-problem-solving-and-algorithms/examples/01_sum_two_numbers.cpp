// Example 02-01: Sum of two numbers
// Demonstrates translating pseudocode directly into C++.
// Pseudocode:
//   INPUT a, b
//   SET sum = a + b
//   OUTPUT sum

#include <iostream>
using namespace std;

int main() {
    int a, b;
    cout << "Enter two integers: ";
    cin >> a >> b;
    int sum = a + b;
    cout << "Sum = " << sum << endl;
    return 0;
}
