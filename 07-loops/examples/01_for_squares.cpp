// Example 07-01: for loop – Print numbers and their squares

#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    cout << setw(6) << "N" << setw(12) << "N^2" << setw(12) << "N^3" << endl;
    cout << string(30, '-') << endl;
    for (int n = 1; n <= 10; n++) {
        cout << setw(6) << n
             << setw(12) << n * n
             << setw(12) << n * n * n << endl;
    }
    return 0;
}
