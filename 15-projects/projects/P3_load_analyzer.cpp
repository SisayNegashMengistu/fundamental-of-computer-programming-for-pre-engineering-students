// Project P3 – Structural Load Analyzer
// Concepts: structs, arrays, functions, math, formatted output
//
// Calculates axial stress, safety factor, and deformation for structural members.
// Uses Hooke's Law and basic statics.

#include <iostream>
#include <cmath>
#include <string>
#include <iomanip>
#include <vector>
using namespace std;

struct Member {
    string name;
    string material;
    double length;         // m
    double diameter;       // m (circular cross-section)
    double appliedLoad;    // N (tensile positive, compressive negative)
    double yieldStrength;  // Pa (material yield stress)
    double youngsModulus;  // Pa (material stiffness)
};

double crossSectionArea(double diameter) {
    return M_PI * pow(diameter / 2.0, 2);
}

double axialStress(const Member& m) {
    return m.appliedLoad / crossSectionArea(m.diameter);
}

double safetyFactor(const Member& m) {
    double stress = fabs(axialStress(m));
    return (stress > 0) ? m.yieldStrength / stress : 999.0;
}

double deformation(const Member& m) {
    return (m.appliedLoad * m.length) /
           (crossSectionArea(m.diameter) * m.youngsModulus);  // mm if Pa and m
}

string statusLabel(double sf) {
    if (sf >= 2.0) return "SAFE";
    if (sf >= 1.0) return "MARGINAL";
    return "OVERSTRESSED";
}

void displayMember(const Member& m) {
    double sf = safetyFactor(m);
    cout << fixed << setprecision(4);
    cout << "Member    : " << m.name << " (" << m.material << ")" << endl;
    cout << "  Length  : " << m.length     << " m"  << endl;
    cout << "  Diameter: " << m.diameter   << " m"  << endl;
    cout << "  Load    : " << m.appliedLoad << " N" << endl;
    cout << "  Area    : " << crossSectionArea(m.diameter) << " m^2" << endl;
    cout << "  Stress  : " << axialStress(m) << " Pa" << endl;
    cout << "  Def.    : " << deformation(m) * 1000 << " mm" << endl;
    cout << "  S.F.    : " << sf << " → " << statusLabel(sf) << endl;
    cout << endl;
}

int main() {
    // Material properties (MPa → Pa)
    const double E_STEEL = 200e9;
    const double SY_STEEL = 250e6;

    vector<Member> members = {
        {"Tie Rod 1",   "Steel", 3.0, 0.02, 50000.0,  SY_STEEL, E_STEEL},
        {"Column A",    "Steel", 5.0, 0.05, -200000.0, SY_STEEL, E_STEEL},
        {"Strut B",     "Steel", 2.5, 0.015, 30000.0,  SY_STEEL, E_STEEL},
    };

    cout << "======================================" << endl;
    cout << "   STRUCTURAL LOAD ANALYZER (C++)     " << endl;
    cout << "======================================" << endl << endl;

    for (const auto& m : members) {
        displayMember(m);
    }

    return 0;
}
