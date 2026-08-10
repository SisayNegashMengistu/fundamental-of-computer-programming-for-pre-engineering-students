// Example 11-02: Engineering – Beam stress calculator using struct

#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

struct Beam {
    string material;
    double length;    // m
    double width;     // m
    double height;    // m
    double load;      // kN (applied force)
};

double area(const Beam& b) {
    return b.width * b.height;
}

double axialStress(const Beam& b) {
    return (b.load * 1000.0) / area(b);  // Pa = N/m^2
}

int main() {
    Beam beam;
    cout << "=== Beam Stress Calculator ===" << endl;
    cout << "Material : "; cin >> beam.material;
    cout << "Length (m): "; cin >> beam.length;
    cout << "Width  (m): "; cin >> beam.width;
    cout << "Height (m): "; cin >> beam.height;
    cout << "Load   (kN): "; cin >> beam.load;

    cout << fixed << setprecision(4);
    cout << "\nCross-section area = " << area(beam) << " m^2" << endl;
    cout << "Axial stress       = " << axialStress(beam) << " Pa" << endl;

    return 0;
}
