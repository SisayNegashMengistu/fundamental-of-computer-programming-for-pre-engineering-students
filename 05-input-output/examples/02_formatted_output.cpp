// Example 05-02: Formatted output with iomanip (material density table)

#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    cout << left  << setw(20) << "Material"
         << right << setw(18) << "Density (kg/m^3)" << endl;
    cout << string(38, '=') << endl;

    cout << left  << setw(20) << "Steel"
         << right << setw(18) << 7850 << endl;
    cout << left  << setw(20) << "Aluminum"
         << right << setw(18) << 2700 << endl;
    cout << left  << setw(20) << "Concrete"
         << right << setw(18) << 2400 << endl;
    cout << left  << setw(20) << "Wood (Pine)"
         << right << setw(18) << 530  << endl;

    return 0;
}
