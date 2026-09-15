// Example 04-03: Kinetic Energy Calculator (Engineering Application)
// Formula: KE = 0.5 * m * v^2

#include <iostream>
#include <cmath>
using namespace std;

int main() {
    const double HALF = 0.5;
    double mass, velocity, kineticEnergy;

    cout << "=== Kinetic Energy Calculator ===" << endl;
    cout << "Enter mass (kg)      : ";
    cin >> mass;
    cout << "Enter velocity (m/s) : ";
    cin >> velocity;

    kineticEnergy = HALF * mass * pow(velocity, 2);

    cout << "Kinetic Energy = " << kineticEnergy << " J" << endl;
    return 0;
}
