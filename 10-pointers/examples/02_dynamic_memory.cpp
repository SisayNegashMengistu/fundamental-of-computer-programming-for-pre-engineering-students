// Example 10-02: Dynamic memory allocation

#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    // Allocate array dynamically
    double* data = new double[n];

    cout << "Enter " << n << " values:" << endl;
    for (int i = 0; i < n; i++) {
        cout << "  [" << i << "]: ";
        cin >> data[i];
    }

    double sum = 0;
    for (int i = 0; i < n; i++) sum += data[i];

    cout << "Sum     = " << sum      << endl;
    cout << "Average = " << sum / n  << endl;

    // Free memory
    delete[] data;
    data = nullptr;

    return 0;
}
