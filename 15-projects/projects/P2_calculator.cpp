// Project P2 – Simple Calculator with History
// Concepts: functions, loops, switch, file I/O, exception handling
//
// Features:
//   - Supports +, -, *, /, % (modulus for integers), ^ (power)
//   - Keeps a history of all calculations
//   - Saves history to "calc_history.txt" on exit
//   - Handles division by zero gracefully

#include <iostream>
#include <fstream>
#include <cmath>
#include <vector>
#include <string>
#include <stdexcept>
#include <iomanip>
using namespace std;

struct Calculation {
    double operand1;
    char   op;
    double operand2;
    double result;
};

double calculate(double a, char op, double b) {
    switch (op) {
        case '+': return a + b;
        case '-': return a - b;
        case '*': return a * b;
        case '/':
            if (b == 0) throw invalid_argument("Division by zero");
            return a / b;
        case '^': return pow(a, b);
        default:  throw invalid_argument("Unknown operator");
    }
}

void printHistory(const vector<Calculation>& history) {
    if (history.empty()) { cout << "No history yet." << endl; return; }
    cout << "\n--- Calculation History ---" << endl;
    for (size_t i = 0; i < history.size(); i++) {
        const Calculation& c = history[i];
        cout << i + 1 << ". "
             << c.operand1 << " " << c.op << " " << c.operand2
             << " = " << c.result << endl;
    }
}

void saveHistory(const vector<Calculation>& history) {
    ofstream fout("calc_history.txt");
    if (!fout) { cerr << "Cannot save history." << endl; return; }
    fout << "Calculator History" << endl;
    fout << string(30, '-') << endl;
    for (size_t i = 0; i < history.size(); i++) {
        const Calculation& c = history[i];
        fout << i + 1 << ". "
             << c.operand1 << " " << c.op << " " << c.operand2
             << " = " << c.result << endl;
    }
    cout << "History saved to calc_history.txt" << endl;
}

int main() {
    vector<Calculation> history;
    char again;

    cout << "=== Simple C++ Calculator ===" << endl;
    cout << "Operators: + - * / ^ (power)" << endl;

    do {
        double a, b;
        char op;

        cout << "\nEnter expression (e.g. 5 + 3): ";
        cin >> a >> op >> b;

        try {
            double result = calculate(a, op, b);
            cout << fixed << setprecision(4);
            cout << a << " " << op << " " << b << " = " << result << endl;
            history.push_back({a, op, b, result});
        } catch (const invalid_argument& e) {
            cerr << "Error: " << e.what() << endl;
        }

        cout << "Calculate again? (y/n): ";
        cin >> again;
    } while (again == 'y' || again == 'Y');

    printHistory(history);
    saveHistory(history);

    return 0;
}
