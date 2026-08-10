// Project P4 – Electrical Circuit Solver
// Concepts: OOP (classes), inheritance, math, formatted output
//
// Models resistors in series and parallel circuits.
// Calculates equivalent resistance, current, and power.

#include <iostream>
#include <vector>
#include <string>
#include <numeric>
#include <iomanip>
#include <cmath>
using namespace std;

class Resistor {
protected:
    string label;
    double resistance;  // Ohms
public:
    Resistor(const string& l, double r) : label(l), resistance(r) {}
    virtual double equivalentResistance() const { return resistance; }
    virtual void display() const {
        cout << label << " = " << resistance << " Ω" << endl;
    }
    virtual ~Resistor() {}
};

class SeriesCircuit {
    vector<double> resistances;
    string name;
    double voltage;
public:
    SeriesCircuit(const string& n, double v) : name(n), voltage(v) {}

    void addResistor(double r) { resistances.push_back(r); }

    double totalResistance() const {
        double total = 0;
        for (double r : resistances) total += r;
        return total;
    }

    double current()    const { return voltage / totalResistance(); }
    double totalPower() const { return voltage * current(); }

    void display() const {
        cout << fixed << setprecision(4);
        cout << "=== " << name << " (Series) ===" << endl;
        cout << "  Supply Voltage      : " << voltage            << " V" << endl;
        cout << "  Total Resistance    : " << totalResistance()  << " Ω" << endl;
        cout << "  Circuit Current     : " << current()          << " A" << endl;
        cout << "  Total Power         : " << totalPower()       << " W" << endl;
    }
};

class ParallelCircuit {
    vector<double> resistances;
    string name;
    double voltage;
public:
    ParallelCircuit(const string& n, double v) : name(n), voltage(v) {}

    void addResistor(double r) { resistances.push_back(r); }

    double totalResistance() const {
        double sumRecip = 0;
        for (double r : resistances) sumRecip += 1.0 / r;
        return 1.0 / sumRecip;
    }

    double totalCurrent()   const { return voltage / totalResistance(); }
    double totalPower()     const { return voltage * totalCurrent(); }

    void display() const {
        cout << fixed << setprecision(4);
        cout << "=== " << name << " (Parallel) ===" << endl;
        cout << "  Supply Voltage      : " << voltage            << " V" << endl;
        cout << "  Equivalent Resistance: " << totalResistance() << " Ω" << endl;
        cout << "  Total Current       : " << totalCurrent()     << " A" << endl;
        cout << "  Total Power         : " << totalPower()       << " W" << endl;
    }
};

int main() {
    cout << "======================================" << endl;
    cout << "   ELECTRICAL CIRCUIT SOLVER (C++)    " << endl;
    cout << "======================================" << endl << endl;

    SeriesCircuit s("Series Circuit 1", 12.0);
    s.addResistor(100.0);
    s.addResistor(220.0);
    s.addResistor(470.0);
    s.display();
    cout << endl;

    ParallelCircuit p("Parallel Circuit 1", 12.0);
    p.addResistor(100.0);
    p.addResistor(220.0);
    p.addResistor(470.0);
    p.display();

    return 0;
}
