// Example 07-03: Nested loops – Multiplication table

#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int n = 10;
    cout << "Multiplication Table (1 to " << n << ")" << endl;
    cout << string(n * 6 + 4, '=') << endl;

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            cout << setw(5) << i * j;
        }
        cout << endl;
    }
    return 0;
}
