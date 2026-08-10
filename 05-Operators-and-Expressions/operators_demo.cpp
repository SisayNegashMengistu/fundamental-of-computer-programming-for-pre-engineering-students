/*
 * Module 05 — Operators and Expressions
 * File: operators_demo.cpp
 * Description: Demonstrates arithmetic, relational, logical, assignment,
 *              increment/decrement, and bitwise operators in C++.
 *
 * Compile:  g++ -o ops operators_demo.cpp
 * Run:      ./ops
 */

#include <iostream>
using namespace std;

int main() {
    // ── 1. Arithmetic Operators ────────────────────────────────────────────
    cout << "=== Arithmetic Operators ===" << endl;
    int a = 17, b = 5;
    cout << "a = " << a << ", b = " << b << endl;
    cout << "a + b = " << (a + b) << endl;    // addition
    cout << "a - b = " << (a - b) << endl;    // subtraction
    cout << "a * b = " << (a * b) << endl;    // multiplication
    cout << "a / b = " << (a / b) << endl;    // integer division (truncates)
    cout << "a % b = " << (a % b) << endl;    // modulus (remainder)

    double x = 17.0, y = 5.0;
    cout << "17.0 / 5.0 = " << (x / y) << endl;  // floating-point division

    // ── 2. Relational (Comparison) Operators ───────────────────────────────
    cout << "\n=== Relational Operators ===" << endl;
    cout << "(a == b) : " << (a == b) << endl;   // equal to
    cout << "(a != b) : " << (a != b) << endl;   // not equal
    cout << "(a >  b) : " << (a >  b) << endl;   // greater than
    cout << "(a <  b) : " << (a <  b) << endl;   // less than
    cout << "(a >= b) : " << (a >= b) << endl;   // greater or equal
    cout << "(a <= b) : " << (a <= b) << endl;   // less or equal

    // ── 3. Logical Operators ───────────────────────────────────────────────
    cout << "\n=== Logical Operators ===" << endl;
    bool p = true, q = false;
    cout << "p = true, q = false" << endl;
    cout << "p && q (AND) : " << (p && q) << endl;   // true only if both true
    cout << "p || q (OR)  : " << (p || q) << endl;   // true if at least one true
    cout << "!p     (NOT) : " << (!p)     << endl;   // flip true/false

    // ── 4. Assignment Operators ────────────────────────────────────────────
    cout << "\n=== Assignment Operators ===" << endl;
    int c = 10;
    cout << "c = " << c << endl;
    c += 5;  cout << "c += 5 → " << c << endl;   // c = c + 5
    c -= 3;  cout << "c -= 3 → " << c << endl;   // c = c - 3
    c *= 2;  cout << "c *= 2 → " << c << endl;   // c = c * 2
    c /= 4;  cout << "c /= 4 → " << c << endl;   // c = c / 4
    c %= 3;  cout << "c %= 3 → " << c << endl;   // c = c % 3

    // ── 5. Increment / Decrement ───────────────────────────────────────────
    cout << "\n=== Increment/Decrement ===" << endl;
    int n = 5;
    cout << "n   = " << n << endl;
    int post = n++;   // post-increment: use then add
    cout << "n++ returned " << post << ", n is now " << n << " (post-increment)" << endl;
    cout << "++n = " << ++n << " (pre-increment)" << endl;
    int postd = n--;  // post-decrement
    cout << "n-- returned " << postd << ", n is now " << n << " (post-decrement)" << endl;

    // ── 6. Ternary Operator ────────────────────────────────────────────────
    cout << "\n=== Ternary Operator ===" << endl;
    int score = 75;
    string result = (score >= 60) ? "Pass" : "Fail";
    cout << "Score " << score << ": " << result << endl;

    return 0;
}
