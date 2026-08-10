/*
 * Module 16 — Practical Exercises and Challenges
 * File: calculator.cpp
 * Description: Challenge 1 — Simple Calculator
 *              A command-line calculator supporting +, -, *, /, %
 *              with loop-until-quit functionality.
 *
 * Compile:  g++ -o calc calculator.cpp
 * Run:      ./calc
 */

#include <iostream>
#include <string>
using namespace std;

int main() {
    cout << "=============================" << endl;
    cout << "   Simple C++ Calculator     " << endl;
    cout << "=============================" << endl;
    cout << "Enter: <num> <op> <num>  or  q to quit" << endl;
    cout << "Operators: + - * / %" << endl << endl;

    string input;
    while (true) {
        cout << ">>> ";
        double a, b;
        char op;

        // Read operator — if user types 'q', quit
        cin >> input;
        if (input == "q" || input == "Q") {
            cout << "Goodbye!" << endl;
            break;
        }

        // Parse first number from input
        try {
            a = stod(input);
        } catch (...) {
            cout << "Invalid input. Try again." << endl;
            continue;
        }

        cin >> op >> b;

        double result;
        bool valid = true;

        switch (op) {
            case '+': result = a + b; break;
            case '-': result = a - b; break;
            case '*': result = a * b; break;
            case '/':
                if (b == 0) {
                    cout << "Error: Division by zero!" << endl;
                    valid = false;
                } else {
                    result = a / b;
                }
                break;
            case '%': {
                int ia = (int)a, ib = (int)b;
                if (ib == 0) {
                    cout << "Error: Modulus by zero!" << endl;
                    valid = false;
                } else {
                    result = ia % ib;
                }
                break;
            }
            default:
                cout << "Unknown operator: " << op << endl;
                valid = false;
        }

        if (valid) {
            cout << "Result: " << result << endl;
        }
    }

    return 0;
}
