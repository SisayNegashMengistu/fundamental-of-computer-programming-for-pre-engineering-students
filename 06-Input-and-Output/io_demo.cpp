/*
 * Module 06 — Input and Output
 * File: io_demo.cpp
 * Description: Demonstrates cin and cout with formatting,
 *              getline for strings, and iomanip functions.
 *
 * Compile:  g++ -o io io_demo.cpp
 * Run:      ./io
 */

#include <iostream>
#include <iomanip>   // setw, setprecision, fixed, left, right
#include <string>
using namespace std;

int main() {
    // ── Basic Output ───────────────────────────────────────────────────────
    cout << "=== Basic Output ===" << endl;
    cout << "Hello, World!" << endl;       // endl flushes buffer + newline
    cout << "Value of pi ≈ " << 3.14159 << "\n";  // \n is faster than endl

    // ── Basic Input ────────────────────────────────────────────────────────
    cout << "\n=== Basic Input ===" << endl;

    int age;
    double height;
    cout << "Enter your age: ";
    cin >> age;
    cout << "Enter your height (m): ";
    cin >> height;
    cout << "Age: " << age << ", Height: " << height << " m" << endl;

    // ── Reading a Full-Line String ─────────────────────────────────────────
    cin.ignore();          // discard leftover newline from previous cin
    string fullName;
    cout << "Enter your full name: ";
    getline(cin, fullName);  // reads spaces too
    cout << "Hello, " << fullName << "!" << endl;

    // ── Formatted Output with iomanip ─────────────────────────────────────
    cout << "\n=== Formatted Output ===" << endl;

    // Fixed decimal places
    double price = 1234.5678;
    cout << fixed << setprecision(2) << "Price: $" << price << endl;

    // Column-aligned table
    cout << "\n--- Student Grades ---" << endl;
    cout << left << setw(15) << "Name"
         << right << setw(8) << "Score"
         << right << setw(8) << "Grade" << endl;
    cout << string(31, '-') << endl;
    cout << left  << setw(15) << "Alice"  << right << setw(8) << 95 << right << setw(8) << "A" << endl;
    cout << left  << setw(15) << "Bob"    << right << setw(8) << 72 << right << setw(8) << "C" << endl;
    cout << left  << setw(15) << "Sisay"  << right << setw(8) << 88 << right << setw(8) << "B" << endl;

    // Escape sequences
    cout << "\n--- Escape Sequences ---" << endl;
    cout << "Tab:\tSeparated" << endl;
    cout << "Newline:\nNew Line" << endl;
    cout << "Backslash: \\" << endl;
    cout << "Quote: \"Hello\"" << endl;

    return 0;
}
